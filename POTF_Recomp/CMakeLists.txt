# Specify the minimum required version of CMake
cmake_minimum_required(VERSION 3.10)

# Set the project name
project(MyProject)

# Set the compiler to Clang
set(CMAKE_C_COMPILER clang)
set(CMAKE_CXX_COMPILER clang++)

# Enable SSSE3, SSE4.1, and AVX instruction sets
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -mssse3 -msse4.1 -mavx")

# Automatically find all .cpp source files in the sources directory
file(GLOB SOURCES "sources/*.cpp")

set(HEADERS
    "sources/ppc_context.h"
    "sources/ppc_config.h"
    "sources/ppc_recomp_shared.h"
)


# Define the executable
add_executable(MyProject ${SOURCES} ${HEADERS})
