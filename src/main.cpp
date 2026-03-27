#include <iostream>

#include <core/math_ops.h>

int main(int argc, char** argv) {
    brt::u8 a = 10;
    brt::u8 b = 5;
    brt::u8 c8 = brt::add_u8(a, b);
    brt::u8 c32 = brt::add_u32(21, 10);
    brt::u8 d8 = brt::sub_u8(a, b);
    brt::u32 d32 = brt::sub_u32(21, 10);

    std::cout << (unsigned int)c8 << std::endl;
    std::cout << (unsigned int)c32 << std::endl;

    std::cout << (unsigned int)d8 << std::endl;
    std::cout << (unsigned int)d32 << std::endl;
    return 0;
}
