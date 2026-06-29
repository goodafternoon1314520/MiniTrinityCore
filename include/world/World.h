#pragma once

#include <memory>
#include <vector>

#include "entity/Player.h"
#include "entity/Unit.h"

class World {
public:
    void AddPlayer(std::shared_ptr<Player> player);
    void Update();

private:
    std::vector<std::shared_ptr<Unit>> players_;
};