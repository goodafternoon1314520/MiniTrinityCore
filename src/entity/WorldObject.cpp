#include "entity/WorldObject.h"

WorldObject::WorldObject(uint64_t guid, float x, float y) : Object(guid), x_(x), y_(y) {}

float WorldObject::GetX() const {
    return x_;
}

float WorldObject::GetY() const {
    return y_;
}

void WorldObject::SetPosition(float x, float y) {
    x_ = x;
    y_ = y;
}