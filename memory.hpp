#ifndef _MEMORY_HPP_
#define _MEMORY_HPP_

#include <cstdint>

#include "processor.hpp"
#include "memory.hpp"

class Memory
{
public:
    explicit Memory()
    {
    }

    static constexpr uint32_t MAX = 1024 * 64;

private:
    uint8_t data[MAX];
};

#endif

