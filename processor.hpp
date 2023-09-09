#ifndef _PROCESSOR_HPP_
#define _PROCESSOR_HPP_

#include <cstdint>
#include <type_traits>

template<class T, std::enable_if_t<std::is_integral<T>::value, bool> = true>
class Register
{
public:
    Register() : value(0) {}
    Register(T value) : value(value) {}

private:
    T value;
};

class Processor
{
public:
    Processor()
    {
    }

private:
    Register<uint16_t> pc;
    Register<uint8_t> sp;
};

#endif
