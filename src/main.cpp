#include <chrono>
#include <thread>

#include "world/World.h"
#include "world/GuidGenerator.h"

int main() {
    World world;

    auto player = std::make_shared<Player>(GuidGenerator::Generate(), "Alice");

    world.AddPlayer(player);

    while (true) {
        world.Update();

        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    return 0;
}