add_library(world STATIC
            src/World.cpp
)

target_link_directories(
        world
        PUBLIC
        include
)

target_link_libraries(
        world
        PUBLIC
        entity
)