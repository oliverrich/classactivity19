#include <iostream>

#include "utils/swap.hpp"


int main() {
    int a = 2;
    int b = 3;
    swap::swap(&a,&b);
    std::cout << a << " " << b << std::endl;
}
