#ifndef _COMPUTER_HPP_
#define _COMPUTER_HPP_

#include "processor.hpp"
#include "memory.hpp"

class Computer
{
public:
    explicit Computer()
    {
    }

private:
    Processor processor;
    Memory memory;
};

#endif
