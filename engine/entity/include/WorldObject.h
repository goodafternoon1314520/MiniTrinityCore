#pragma once

#include "Object.h"

class WorldObject : public Object {
public:
    WorldObject(uint64_t guid, float x, float y);

    float GetX() const;
    float GetY() const;

    void SetPosition(float x, float y);

private:
    float x_;
    float y_;
};