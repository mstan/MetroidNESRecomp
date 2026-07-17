cmake_minimum_required(VERSION 3.20)
project(MetroidNESRecomp C CXX)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

set(NESRECOMP_ROOT ${CMAKE_SOURCE_DIR}/nesrecomp)

# ---- nesrecomp pin check ----
# nesrecomp/ is a Windows directory junction → F:/Projects/nesrecomp.
# nesrecomp.pin records the expected nesrecomp version. Two optional fields:
#   branch = <ref>   default origin/master, used when sha is unset
#   sha    = <sha>   exact pin, takes precedence over branch when set
# At configure time we resolve the expected SHA, compare to HEAD of the
# junction target, and fail with a clear error on drift.
if(EXISTS "${CMAKE_SOURCE_DIR}/nesrecomp.pin")
    file(STRINGS "${CMAKE_SOURCE_DIR}/nesrecomp.pin" _PIN_LINES)
    set(NESRECOMP_PIN_BRANCH "")
    set(NESRECOMP_PIN_SHA "")
    foreach(_line IN LISTS _PIN_LINES)
        if(_line MATCHES "^[ \t]*#")
            # comment, skip
        elseif(_line MATCHES "^[ \t]*branch[ \t]*=[ \t]*(.*)$")
            string(STRIP "${CMAKE_MATCH_1}" NESRECOMP_PIN_BRANCH)
        elseif(_line MATCHES "^[ \t]*sha[ \t]*=[ \t]*(.*)$")
            string(STRIP "${CMAKE_MATCH_1}" NESRECOMP_PIN_SHA)
        endif()
    endforeach()

    if(NESRECOMP_PIN_SHA)
        set(NESRECOMP_EXPECTED_SHA "${NESRECOMP_PIN_SHA}")
        set(NESRECOMP_PIN_SOURCE "explicit sha in nesrecomp.pin")
    else()
        if(NOT NESRECOMP_PIN_BRANCH)
            set(NESRECOMP_PIN_BRANCH "origin/master")
        endif()
        execute_process(
            COMMAND git -C "${NESRECOMP_ROOT}" rev-parse "${NESRECOMP_PIN_BRANCH}"
            OUTPUT_VARIABLE NESRECOMP_EXPECTED_SHA
            OUTPUT_STRIP_TRAILING_WHITESPACE
            RESULT_VARIABLE _NESRECOMP_RP_RC
        )
        if(NOT _NESRECOMP_RP_RC EQUAL 0)
            message(FATAL_ERROR
                "nesrecomp pin: failed to resolve branch '${NESRECOMP_PIN_BRANCH}' "
                "in ${NESRECOMP_ROOT}. Is the ref fetched?")
        endif()
        set(NESRECOMP_PIN_SOURCE "tip of ${NESRECOMP_PIN_BRANCH}")
    endif()

    execute_process(
        COMMAND git -C "${NESRECOMP_ROOT}" rev-parse HEAD
        OUTPUT_VARIABLE NESRECOMP_ACTUAL_SHA
        OUTPUT_STRIP_TRAILING_WHITESPACE
        RESULT_VARIABLE _NESRECOMP_HEAD_RC
    )
    if(NOT _NESRECOMP_HEAD_RC EQUAL 0)
        message(FATAL_ERROR
            "nesrecomp pin check: failed to read HEAD of ${NESRECOMP_ROOT}. "
            "Is the directory a valid git checkout?")
    endif()

    if(NOT NESRECOMP_ACTUAL_SHA STREQUAL NESRECOMP_EXPECTED_SHA)
        message(FATAL_ERROR
            "nesrecomp pin mismatch.\n"
            "  expected: ${NESRECOMP_EXPECTED_SHA}  (from ${NESRECOMP_PIN_SOURCE})\n"
            "  actual:   ${NESRECOMP_ACTUAL_SHA}  (HEAD of ${NESRECOMP_ROOT})\n"
            "\n"
            "To align the central nesrecomp checkout, run:\n"
            "  git -C ${NESRECOMP_ROOT} checkout ${NESRECOMP_EXPECTED_SHA}\n"
            "\n"
            "Or, if you want to roll this game forward to the actual SHA, edit "
            "${CMAKE_SOURCE_DIR}/nesrecomp.pin (set sha=${NESRECOMP_ACTUAL_SHA} "
            "or clear sha to track the branch tip) and commit.")
    endif()
    message(STATUS "nesrecomp pin OK: ${NESRECOMP_EXPECTED_SHA} (${NESRECOMP_PIN_SOURCE})")
endif()

# ---- Nestopia Oracle (optional) ----
option(ENABLE_NESTOPIA_ORACLE "Build with Nestopia emulator oracle for verify mode" ON)
set(NESTOPIA_DIR "${CMAKE_SOURCE_DIR}/nestopia-core" CACHE PATH "Path to nestopia-core source")

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
    nes_snapshot.c
    verify_mode.c
    watchdog.c
    ${METROID_GEN}
)

target_compile_definitions(MetroidNESRecomp PRIVATE RECOMP_STACK_TRACKING WATCHDOG_ENABLED)

target_include_directories(MetroidNESRecomp PRIVATE
    ${NESRECOMP_RUNNER_INCLUDE_DIRS}
    ${CMAKE_SOURCE_DIR}
    ${SDL2_INCLUDE_DIRS}
)

target_link_libraries(MetroidNESRecomp PRIVATE ${SDL2_LIBRARIES})

if(WIN32)
    target_link_libraries(MetroidNESRecomp PRIVATE ws2_32)
endif()

# ---- Nestopia Oracle integration ----
if(ENABLE_NESTOPIA_ORACLE)
    target_link_libraries(MetroidNESRecomp PRIVATE nestopia_core)
    target_compile_definitions(MetroidNESRecomp PRIVATE ENABLE_NESTOPIA_ORACLE)
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
endif()

# ---- Pre-boot GUI launcher (RmlUi) ----
include(${NESRECOMP_ROOT}/runner/launcher.cmake)
nesrecomp_add_launcher(MetroidNESRecomp)

# Metroid saves via a 24-char password, not battery SRAM. Drive the launcher's
# SAVES panel to show/edit that password (the metroid.srm sidecar next to the exe
# that extras.c's save-anywhere capture reads/writes) instead of the binary SRAM UI.
target_compile_definitions(MetroidNESRecomp PRIVATE
    NESRECOMP_GAME_PASSWORD_SAVE="metroid.srm"
    NESRECOMP_GAME_PASSWORD_SAVE_LABEL="Password")
