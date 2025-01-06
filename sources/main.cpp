#include <iostream>
#include <cstdint>
#include <cmath>

int main(int argc, char** argv) {
    uint64_t n = 100000000000000003;
    uint64_t lim = (uint64_t)sqrt(n);
    for ( uint64_t i = 2; i < lim + 1; i++ ){
        if ( n % i  == 0 ){
            std::cout << "No\n";
        }
    }
    std::cout << "Yes\n";
}