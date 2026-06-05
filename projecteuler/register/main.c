#include <stdio.h>
#include <stdbool.h>

int main() {
    unsigned long long i = 1;
    unsigned long long total = 0;

    while (true) {
        total += i*i;
        i += 2;

        if (i > 465000)
            break;
    }

    printf("%lld\n", total);
}
