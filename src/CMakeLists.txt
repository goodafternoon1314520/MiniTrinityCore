set(SOURCE_FILES

    main.cpp

    entity/Object.cpp
    entity/WorldObject.cpp
    entity/Unit.cpp
    entity/Player.cpp
    entity/Creature.cpp

    world/World.cpp
)

add_executable(
        MiniTrinityCore
        ${SOURCE_FILES}
)

target_include_directories(
        MiniTrinityCore
        PRIVATE
        ${PROJECT_SOURCE_DIR}/include
)

target_compile_features(
        MiniTrinityCore
        PRIVATE
        cxx_std_20
)

# 开启警告 MSCV
if (MSVC)

    target_compile_options(
        MiniTrinityCore
            PRIVATE
            /W4
    )

# GCC/Clang
else (NOT MSVC)

    target_compile_options(
            MiniTrinityCore
            PRIVATE

            -Wall
            -Wextra
            -Wpedantic
    )

endif()

# Debug/Release
if (NOT CMAKE_BUILD_TYPE)

    set(
            CMAKE_BUILD_TYPE
            Debug
    )

endif()

# 输出目录
set_target_properties(
        MiniTrinityCore

        PROPERTIES

        RUNTIME_OUTPUT_DIRECTORY
        ${PROJECT_SOURCE_DIR}/bin
)