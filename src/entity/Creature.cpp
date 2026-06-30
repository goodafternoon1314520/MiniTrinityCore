#include <iostream>

#include "entity/Creature.h"

Creature::Creature(uint64_t guid, float x, float y, uint32_t maxHealth) : Unit(guid, x, y, maxHealth) {}

void Creature::Update(float diff) {
    std::cout << "Creature thinking...\n";
}