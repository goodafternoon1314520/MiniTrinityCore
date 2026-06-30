#pragma once

#include <cstdint>

class Object {
public:
    explicit Object(uint64_t guid);
    uint64_t GetGUID() const;

private:
    uint64_t guid_;
};