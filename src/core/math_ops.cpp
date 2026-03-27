#include "core/caesar.h"

#include <core/math_opps.h>

namespace brt {
// the operations must be implemented using only the caesar function
u8 add_u8(u8 a, u8 b) {
    return *caesar<u8>(&a, 1, b);
}
u32 add_u32(u32 a, u32 b) {
    return *caesar<u32>(&a, 1, b);
}

u8 sub_u8(u8 a, u8 b) {
    return *caesar<u8>(&a, 1, -b);
}
u32 sub_u32(u32 a, u32 b) {
    return *caesar<u32>(&a, 1, -b);
}

u32 mul_u32(u32 a, u32 b) {
    u32 result = 0;
}
}  // namespace brt
