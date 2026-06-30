#include "../include/Player.h"

Player::Player(uint64_t guid, std::string name) : Unit(guid, 0, 0, 100), name_(name) {}

std::string Player::GetName() const {
    return name_;
}

void Player::Update(float diff) {

}