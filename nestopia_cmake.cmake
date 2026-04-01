# Nestopia libretro core — static library. No dependencies.
# Included from FaxanaduRecomp/CMakeLists.txt.

set(NESTOPIA_DIR ${CMAKE_SOURCE_DIR}/nestopia-core)
set(NESTOPIA_CORE_DIR ${NESTOPIA_DIR}/source/core)

file(GLOB_RECURSE NESTOPIA_CORE_SOURCES ${NESTOPIA_CORE_DIR}/*.cpp)
list(FILTER NESTOPIA_CORE_SOURCES EXCLUDE REGEX "NstVideoFilterxBR\\.cpp$")
list(FILTER NESTOPIA_CORE_SOURCES EXCLUDE REGEX "NstVideoFilter2xSaI\\.cpp$")
list(FILTER NESTOPIA_CORE_SOURCES EXCLUDE REGEX "NstVideoFilterHqX\\.cpp$")
list(FILTER NESTOPIA_CORE_SOURCES EXCLUDE REGEX "NstVideoFilterScaleX\\.cpp$")
list(FILTER NESTOPIA_CORE_SOURCES EXCLUDE REGEX "NstZlib\\.cpp$")

file(GLOB NESTOPIA_NTSC_SOURCES ${NESTOPIA_DIR}/source/nes_ntsc/*.cpp)

add_library(nestopia_core STATIC
    ${NESTOPIA_CORE_SOURCES}
    ${NESTOPIA_NTSC_SOURCES}
    ${NESTOPIA_DIR}/libretro/libretro.cpp
)

target_include_directories(nestopia_core PUBLIC
    ${NESTOPIA_DIR}
    ${NESTOPIA_DIR}/source
    ${NESTOPIA_DIR}/libretro
    ${NESTOPIA_DIR}/libretro/libretro-common/include
)

target_compile_definitions(nestopia_core PRIVATE _CRT_SECURE_NO_WARNINGS NST_NO_ZLIB NST_NO_XBR)

if(MSVC)
    target_compile_options(nestopia_core PRIVATE /W2 /WX- /EHsc /wd4244 /wd4267 /wd4018 /wd4996 /wd4305)
endif()
