#pragma once

#include "entity/WorldObject.h"

class Unit : public WorldObject {
public:
    Unit(uint64_t guid, float x, float y, int hp);

    uint32_t GetHealth() const;

    uint32_t GetMaxHealth() const;

    bool IsAlive() const;

    // 受伤
    void TakeDamage(uint32_t damage);

    // 回血
    void Heal(uint32_t value);

    // 更新
    virtual void Update(uint32_t diff) {}

private:
    uint32_t maxHealth_;
    uint32_t health_;
};