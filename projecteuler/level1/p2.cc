#include <stdio.h>
#include <map>

static std::map<unsigned int, unsigned long long> fibnum; 
static unsigned long long sumtotal = 0;

unsigned long long fib(unsigned int n) {
    unsigned long long total = 0;

    if (n <= 1) {
        fibnum[n] = n;
        return n;
    }

    total = fibnum[n-1] + fibnum[n-2];

    fibnum[n] = total;

    return total;
}

int main() {
    unsigned long long i = 0;

    while (true) {
        unsigned long long num = fib(i);

        if (num >= 4000000)
            break;

        if (num % 2 == 0)
            sumtotal += num;

        i++;
    }
    
    printf("%lld\n", sumtotal);

    return 0;
}
