#include "world/World.h"

#include <iostream>

void World::AddPlayer(std::shared_ptr<Player> player) {
    players_.push_back(player);

    std::cout << "Player " << player -> GetName() << " Enter World\n";
}

void World::Update() {
    std::cout << "World Tick\n";

    for (auto& player : players_) {
        std::cout << player -> GetGUID() << " Position(" << player -> GetX() << ", " << player -> GetY() << ")\n";
        std::cout << player -> GetHealth() << std::endl;
    }
}