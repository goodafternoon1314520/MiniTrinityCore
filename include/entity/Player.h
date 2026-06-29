#pragma once

#include <string>

#include "entity/Unit.h"

class Player : public Unit {
public:
    Player(uint64_t guid, std::string name);
    std::string GetName() const;

private:
    std::string name_;
};