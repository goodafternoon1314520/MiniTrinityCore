cmake_minimum_required(VERSION 3.20)

project(MiniTrinityCore)

set(CMAKE_CXX_STANDARD 20)

add_subdirectory(engine/entity)
add_subdirectory(engine/world)

add_executable(
        MiniTrinityCore

        src/main.cpp
)

target_link_libraries(
        MiniTrinityCore

        PRIVATE

        entity
        world
)