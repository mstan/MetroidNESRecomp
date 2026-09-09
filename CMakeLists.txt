cmake_minimum_required(VERSION 3.20)
project(MetroidNESRecomp C CXX)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

set(NESRECOMP_ROOT ${CMAKE_SOURCE_DIR}/nesrecomp)

# nesrecomp/ and recomp-ui/ are git submodules (see .gitmodules); the pinned
# commit is the gitlink recorded in this repo. After cloning run setup.sh/.bat
# (git submodule update --init) to fetch them at the recorded commits.

set(NESRECOMP_ENABLE_MODS ON CACHE BOOL
    "Enable package mods for Metroid" FORCE)
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
    metroid_ws.c
    metroid_ws_render.c
    mods/widescreen_plugin.c
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
include(${CMAKE_SOURCE_DIR}/recomp-ui/recomp_ui.cmake)
recomp_target_launcher_ui(MetroidNESRecomp
    CONSOLE nes
    BOXART ${CMAKE_SOURCE_DIR}/boxart.tga)

# Declarative mod packages shipped with the build (mirrors SMB's staging step).
add_custom_command(TARGET MetroidNESRecomp POST_BUILD
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
