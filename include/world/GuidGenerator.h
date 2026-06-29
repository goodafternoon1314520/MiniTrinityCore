#pragma once

#include <atomic>

class GuidGenerator {
public:
    static uint64_t Generate() {
        static std::atomic<uint64_t> id = 1;
        return id++;
    }
};