cmake_minimum_required(VERSION 3.20)
project(MetroidNESRecomp C CXX)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

set(NESRECOMP_ROOT ${CMAKE_SOURCE_DIR}/nesrecomp CACHE PATH "NESRecomp engine checkout")

# nesrecomp/ and recomp-ui/ are git submodules (see .gitmodules); the pinned
# commit is the gitlink recorded in this repo. After cloning run setup.sh/.bat
# (git submodule update --init) to fetch them at the recorded commits.

set(NESRECOMP_ENABLE_MODS ON CACHE BOOL
    "Enable package mods for Metroid" FORCE)
set(NESRECOMP_BACKEND "cycle" CACHE STRING "CPU backend: cycle or legacy")
set_property(CACHE NESRECOMP_BACKEND PROPERTY STRINGS cycle legacy)
if(NESRECOMP_BACKEND STREQUAL "cycle")
    set(METROID_VARIANT "usa" CACHE STRING "usa (NTSC) or europe (PAL)")
    set_property(CACHE METROID_VARIANT PROPERTY STRINGS usa europe)
    if(METROID_VARIANT STREQUAL "usa")
        set(met_region NTSC)
    elseif(METROID_VARIANT STREQUAL "europe")
        set(met_region PAL)
    else()
        message(FATAL_ERROR "METROID_VARIANT must be usa or europe")
    endif()
    set(NESRECOMP_ROM "" CACHE FILEPATH "Original ROM, not distributed")
    set(NESRECOMP_HOST_COMPILER "" CACHE FILEPATH "Optional prebuilt compiler")
    include("${NESRECOMP_ROOT}/runner/cyc/project.cmake")
    nesrecomp_add_cycle_game(MetroidNESRecomp
        ROM "${NESRECOMP_ROM}" GAME_CONFIG "${CMAKE_CURRENT_SOURCE_DIR}/game-cycle-${METROID_VARIANT}.toml"
        RECOMPILER "${NESRECOMP_HOST_COMPILER}" SEED_FILE "${CMAKE_CURRENT_SOURCE_DIR}/cyc_seeds_${METROID_VARIANT}.txt"
        MODS GAME_ID "metroid-nes" PLAYERS 1 REGION ${met_region}
        PASSWORD_SAVE "metroid.srm" PASSWORD_SAVE_LABEL "Password"
        BOXART "${CMAKE_CURRENT_SOURCE_DIR}/boxart.tga"
        HOST_EXTRAS cyc_extras.c cycle_bridge.c password_writer.c metroid_ws.c metroid_ws_render.c metroid_ws_actors.c
            mods/widescreen_plugin.c game_voxel.c mods/voxel_plugin.c
            "${NESRECOMP_ROOT}/runner/cyc/cyc_presentation.c"
            "${NESRECOMP_ROOT}/runner/src/voxel_renderer.c"
            "${NESRECOMP_ROOT}/runner/src/voxel_screen_profile.c"
            "${NESRECOMP_ROOT}/runner/src/keybinds.c")
    target_include_directories(MetroidNESRecomp PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}")
    target_compile_definitions(MetroidNESRecomp PRIVATE METROID_CYCLE NESRECOMP_CYCLE_PRESENTATION)
    if(METROID_VARIANT STREQUAL "europe")
        target_compile_definitions(MetroidNESRecomp PRIVATE METROID_CYCLE_PAL)
    endif()
    add_custom_command(TARGET MetroidNESRecomp POST_BUILD
        COMMAND "${Python3_EXECUTABLE}" "${CMAKE_CURRENT_SOURCE_DIR}/tools/stage_cycle_mods.py"
            "${CMAKE_CURRENT_SOURCE_DIR}/mods/preloaded" "$<TARGET_FILE_DIR:MetroidNESRecomp>/mods" "${METROID_VARIANT}")
    return()
elseif(NOT NESRECOMP_BACKEND STREQUAL "legacy")
    message(FATAL_ERROR "NESRECOMP_BACKEND must be cycle or legacy")
endif()

include(${NESRECOMP_ROOT}/runner/runner.cmake)

list(APPEND CMAKE_PREFIX_PATH "${NESRECOMP_ROOT}/runner/external/SDL2/cmake")
find_package(SDL2 REQUIRED)

# ---- Generated sources ----
# metroid_full.c (small umbrella: entry points + g_rti_target) and the
# metroid_full_bankNN.c parts are now independent translation units (each
# #includes generated/metroid_full_decls.h) that compile in parallel instead
# of being textually #included into one giant single-TU umbrella. The glob
# picks up both the umbrella and every bank part; metroid_full_decls.h is a
# header, not a TU, so it isn't matched/compiled directly. CONFIGURE_DEPENDS
# re-globs on reconfigure so a regen that changes the bank count (add/remove
# banks) doesn't require manually editing this list.
file(GLOB METROID_GEN CONFIGURE_DEPENDS
    "${CMAKE_SOURCE_DIR}/generated/metroid_full*.c"
    "${CMAKE_SOURCE_DIR}/generated/metroid_dispatch.c"
)
list(FILTER METROID_GEN EXCLUDE REGEX "generated/metroid_full_bank(01|07)\\.c$")

# ---- Main executable ----
# NOTE: recomp_stack.c is intentionally NOT listed here — it was promoted to
# a SHARED runner source (nesrecomp/runner/src/recomp_stack.c, "one source of
# truth", see its header comment) and is already pulled in via
# NESRECOMP_RUNNER_SOURCES. This game repo's top-level recomp_stack.c/.h are
# stale pre-promotion copies (RECOMP_STACK_DEPTH=16 vs the shared 512, no
# bail_trace doc) left over from before the framework consolidated three
# divergent per-game variants; compiling both produced duplicate-symbol
# LNK2005 errors once the nesrecomp pin rolled forward past the promotion.
# extras.c/watchdog.c's quoted #include "recomp_stack.h" now falls through to
# the shared nesrecomp/runner/include/recomp_stack.h (declarations are a
# strict superset/ABI-compatible with the stale local one). Pre-existing
# framework/game drift, unrelated to the split-TU change; surfaced by the
# pin bump this task required to build against the split-TU emitter.
add_executable(MetroidNESRecomp
    ${NESRECOMP_RUNNER_SOURCES}
    extras.c
    password_writer.c
    metroid_ws.c
    metroid_ws_render.c
    metroid_ws_actors.c
    mods/widescreen_plugin.c
    game_voxel.c
    mods/voxel_plugin.c
    nes_snapshot.c
    verify_mode.c
    watchdog.c
    ${METROID_GEN}
)

target_compile_definitions(MetroidNESRecomp PRIVATE
    NESRECOMP_GAME_ID="metroid-nes"
    NESRECOMP_GAME_ROM_CRC32="70080810"   # Metroid (USA), header excluded
    NESRECOMP_SPLIT_PARTS_EXTERNAL
    RECOMP_STACK_TRACKING
    WATCHDOG_ENABLED
    NESRECOMP_GAME_SDL_EVENT_HOOK=game_voxel_handle_event
)

target_include_directories(MetroidNESRecomp PRIVATE
    ${NESRECOMP_RUNNER_INCLUDE_DIRS}
    ${CMAKE_SOURCE_DIR}
    ${SDL2_INCLUDE_DIRS}
)

target_link_libraries(MetroidNESRecomp PRIVATE ${SDL2_LIBRARIES})

if(WIN32)
    target_link_libraries(MetroidNESRecomp PRIVATE ws2_32)
endif()

# ---- Post-build ----
if(WIN32)
    add_custom_command(TARGET MetroidNESRecomp POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_if_different
            "${NESRECOMP_ROOT}/runner/external/SDL2/lib/x64/SDL2.dll"
            "$<TARGET_FILE_DIR:MetroidNESRecomp>"
    )
endif()

if(MSVC)
    target_compile_options(MetroidNESRecomp PRIVATE /W3 /WX-)
    target_compile_options(MetroidNESRecomp PRIVATE /wd4102)
    # A few cross-part generated helpers overlap at split boundaries.
    # Match the validated split-TU probe target until the generator deduplicates them.
    target_link_options(MetroidNESRecomp PRIVATE /FORCE:MULTIPLE)
endif()

# ---- Pre-boot GUI launcher (recomp-ui / Dear ImGui) ----
set(NESRECOMP_RECOMP_UI "${CMAKE_CURRENT_SOURCE_DIR}/recomp-ui" CACHE PATH "recomp-ui checkout")
include("${NESRECOMP_RECOMP_UI}/recomp_ui.cmake")
recomp_target_launcher_ui(MetroidNESRecomp
    CONSOLE nes
    BOXART ${CMAKE_SOURCE_DIR}/boxart.tga)

# Declarative mod packages shipped with the build (mirrors SMB's staging step).
add_custom_command(TARGET MetroidNESRecomp POST_BUILD
    # copy_directory is additive. Explicitly remove the formerly preloaded
    # diorama package so an incremental build hides the parked experiment too.
    COMMAND ${CMAKE_COMMAND} -E remove_directory
        "$<TARGET_FILE_DIR:MetroidNESRecomp>/mods/packages/metroid.enhancement.voxel-diorama"
    COMMAND ${CMAKE_COMMAND} -E copy_directory
        "${CMAKE_SOURCE_DIR}/mods/preloaded"
        "$<TARGET_FILE_DIR:MetroidNESRecomp>/mods"
    COMMENT "Staging Metroid's preloaded NES mod packages")

# Metroid saves via a 24-char password, not battery SRAM. Drive the launcher's
# SAVES panel to show/edit that password (the metroid.srm sidecar next to the exe
# that extras.c's save-anywhere capture reads/writes) instead of the binary SRAM UI.
target_compile_definitions(MetroidNESRecomp PRIVATE
    NESRECOMP_GAME_PASSWORD_SAVE="metroid.srm"
    NESRECOMP_GAME_PASSWORD_SAVE_LABEL="Password")

# Single-player (one controller) — hide the launcher's Player 2 card.
target_compile_definitions(MetroidNESRecomp PRIVATE NESRECOMP_GAME_PLAYERS=1)
