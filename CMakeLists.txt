cmake_minimum_required(VERSION 3.20)
project(MetroidNESRecomp C CXX)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

set(NESRECOMP_ROOT ${CMAKE_SOURCE_DIR}/nesrecomp)

# nesrecomp/ and recomp-ui/ are git submodules (see .gitmodules); the pinned
# commit is the gitlink recorded in this repo. After cloning run setup.sh/.bat
# (git submodule update --init) to fetch them at the recorded commits.

# ---- Nestopia Oracle (optional) ----
option(ENABLE_NESTOPIA_ORACLE "Build with Nestopia emulator oracle for verify mode" ON)
set(NESTOPIA_DIR "${CMAKE_SOURCE_DIR}/nestopia-core" CACHE PATH "Path to nestopia-core source")

include(${NESRECOMP_ROOT}/runner/runner.cmake)

list(APPEND CMAKE_PREFIX_PATH "${NESRECOMP_ROOT}/runner/external/SDL2/cmake")
find_package(SDL2 REQUIRED)

# ---- Main executable ----
add_executable(MetroidNESRecomp
    ${NESRECOMP_RUNNER_SOURCES}
    extras.c
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

# ---- Pre-boot GUI launcher (recomp-ui / Dear ImGui) ----
include(${CMAKE_SOURCE_DIR}/recomp-ui/recomp_ui.cmake)
recomp_target_launcher_ui(MetroidNESRecomp BOXART ${CMAKE_SOURCE_DIR}/boxart.tga)

# Metroid saves via a 24-char password, not battery SRAM. Drive the launcher's
# SAVES panel to show/edit that password (the metroid.srm sidecar next to the exe
# that extras.c's save-anywhere capture reads/writes) instead of the binary SRAM UI.
target_compile_definitions(MetroidNESRecomp PRIVATE
    NESRECOMP_GAME_PASSWORD_SAVE="metroid.srm"
    NESRECOMP_GAME_PASSWORD_SAVE_LABEL="Password")

# Single-player (one controller) — hide the launcher's Player 2 card.
target_compile_definitions(MetroidNESRecomp PRIVATE NESRECOMP_GAME_PLAYERS=1)
