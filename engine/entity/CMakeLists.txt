add_library(entity STATIC

            src/Object.cpp
            src/WorldObject.cpp
            src/Unit.cpp
            src/Player.cpp
            src/Creature.cpp
)

target_include_directories(
        entity
        PUBLIC
        include
)