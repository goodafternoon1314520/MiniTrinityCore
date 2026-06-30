#pragma once

#include "entity/Unit.h"

class Creature : public Unit {
public:
    Creature(uint64_t guid, float x, float y, uint32_t maxHealth);

    void Update(float diff) override;
};