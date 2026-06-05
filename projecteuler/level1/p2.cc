#include <stdio.h>

unsigned long long fib(unsigned int n) {
    unsigned long long total = 0;
    unsigned long long i = 0;

    if (n == 0)
        return 0;

    if (n == 1)
        return 1;

    return fib(n-1) + fib(n-2);
}

int main() {

    printf("%lld %lld %lld %lld %lld %lld %lld %lld\n", fib(0), fib(1), fib(2), fib(3), fib(4), fib(5), fib(6), fib(7));
    

    return 0;
}
