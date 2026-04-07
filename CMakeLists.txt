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

include(${NESRECOMP_ROOT}/runner/runner.cmake)

list(APPEND CMAKE_PREFIX_PATH "${NESRECOMP_ROOT}/runner/external/SDL2/cmake")
find_package(SDL2 REQUIRED)

# ---- Nestopia Oracle (optional) ----
option(ENABLE_NESTOPIA_ORACLE "Build with Nestopia emulator oracle for verify mode" ON)

if(ENABLE_NESTOPIA_ORACLE)
    include(${CMAKE_SOURCE_DIR}/nestopia_cmake.cmake)
endif()

# ---- Main executable ----
add_executable(MetroidNESRecomp
    ${NESRECOMP_RUNNER_SOURCES}
    extras.c
    recomp_stack.c
    nes_snapshot.c
    verify_mode.c
    watchdog.c
    generated/metroid_full.c
    generated/metroid_dispatch.c
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
    target_sources(MetroidNESRecomp PRIVATE
        nestopia_bridge.cpp
    )
    target_link_libraries(MetroidNESRecomp PRIVATE nestopia_core)
    target_compile_definitions(MetroidNESRecomp PRIVATE ENABLE_NESTOPIA_ORACLE)
    target_include_directories(MetroidNESRecomp PRIVATE
        ${CMAKE_SOURCE_DIR}/nestopia-core/libretro
        ${CMAKE_SOURCE_DIR}/nestopia-core/libretro/libretro-common/include
    )
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
