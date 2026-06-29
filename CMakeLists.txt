cmake_minimum_required(VERSION 3.20)

project(MiniTrinityCore)

set(CMAKE_CXX_STANDARD 20)

include_directories(include)

file(GLOB_RECURSE SRC_FILES src/*.cpp)

add_executable(MiniTrinityCore ${SRC_FILES})