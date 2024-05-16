cmake_minimum_required(VERSION 3.27)
project(MyProgram)
file(GLOB_RECURSE SOURCES
    src/*.cpp
)
file(GLOB_RECURSE HEADERS
    include/*.hpp
)
set(FETCHCONTENT_QUIET FALSE)
include(FetchContent)
FetchContent_Declare(
    torch
    URL https://download.pytorch.org/libtorch/nightly/cpu/libtorch-shared-with-deps-latest.zip
)
FetchContent_MakeAvailable(torch)

add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})
include_directories(${PROJECT_NAME} PRIVATE include)

set(CMAKE_PREFIX_PATH  ${CMAKE_BINARY_DIR}/_deps/torch-src/share/cmake/)
find_package(Torch REQUIRED)
target_link_libraries(${PROJECT_NAME} "${TORCH_LIBRARIES}")
