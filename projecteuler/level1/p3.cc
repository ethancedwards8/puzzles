// https://cp-algorithms.com/algebra/factorization.html
#include <stdio.h>
#include <cmath>

#define NUM 600851475143

int main() {
    unsigned long long factor = 0;

    for (unsigned long long i = 0; i < (unsigned long long) sqrt(NUM); i++) {
        if ( NUM % i == 0 ) {
            printf("%lld\n", i);

            factor = i;
        }
    };


    printf("%lld\n", factor);


    return 0;
}
