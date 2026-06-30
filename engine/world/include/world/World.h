#pragma once

#include <memory>
#include <vector>

#include "/home/john/projects/MiniTrinityCore/engine/entity/include/Unit.h"

class World {
public:
    void AddUnit(std::shared_ptr<Unit> unit);
    void Update();

private:
    std::vector<std::shared_ptr<Unit>> units_;
};