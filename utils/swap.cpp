#include "swap.hpp"

namespace swap {
    void swap(int* a, int* b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}
