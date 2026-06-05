#include <stdio.h>

int main() {
    unsigned long long total = 0;

    for (int i = 0; i < 1000; i++) {
        if (i % 3 == 0 || i % 5 == 0)
            total += i;
    }

    printf("%lld\n", total);
}
