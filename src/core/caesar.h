#pragma once

#include <core/globs.h>

namespace brt {
template<typename T>
T* caesar(T* data, u32 size, T key, T alphabet_size = 0) {
    for (u32 i = 0; i < size; i++) {
        data[i] += key;
        if (alphabet_size && data[i] >= alphabet_size)
            data[i] -= alphabet_size;
    }
    return data;
}
}  // namespace brt
