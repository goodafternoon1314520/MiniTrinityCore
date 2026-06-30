#include <chrono>
#include <thread>

#include "../engine/world/include/world/World.h"
#include "../engine/world/include/world/GuidGenerator.h"
#include "../engine/entity/include/Creature.h"
#include "../engine/entity/include/Player.h"

int main() {
    World world;

    auto player = std::make_shared<Player>(GuidGenerator::Generate(), "Alice");
    auto goblin = std::make_shared<Creature>(GuidGenerator::Generate(), 0, 0, 50);

    world.AddUnit(player);
    world.AddUnit(goblin);

    while (true) {
        world.Update();

        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    return 0;
}