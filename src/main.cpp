#include <iostream>
#include "fibonacci_sequence/fib.h"

int main() {
    for (int i = 0; i < 10; i++) {
        std::cout << "fib(" << i << ") = "
                    << fib(i)
                    << std::endl;
    }
}