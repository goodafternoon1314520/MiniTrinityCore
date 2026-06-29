#include "entity/Unit.h"

Unit::Unit(uint64_t guid, float x, float y, int maxHealth) : WorldObject(guid, x, y), health_(maxHealth), maxHealth_(maxHealth){
}

uint32_t Unit::GetHealth() const {
    return health_;
}

uint32_t Unit::GetMaxHealth() const {
    return maxHealth_;
}

bool Unit::IsAlive() const {
    return health_ > 0;
}

void Unit::TakeDamage(uint32_t damage) {
    health_ -= damage;

    if (health_ <= 0)
        health_ = 0;
}

void Unit::Heal(uint32_t value) {
    health_ += value;

    if (health_ >= maxHealth_)
        health_ = maxHealth_;
}