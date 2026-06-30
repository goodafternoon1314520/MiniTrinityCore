#include "world/World.h"

#include <iostream>

void World::AddUnit(std::shared_ptr<Unit> unit) {
    units_.push_back(unit);

    std::cout << "Unit Enter World\n";
}

void World::Update() {
    std::cout << "World Tick\n";

    float diff = 1.0f; // 简化时间片

    for (auto& unit : units_)
        unit -> Update(diff);
}