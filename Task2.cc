#include <stdio.h>

int main() {
    unsigned int N;
    scanf("%u", &N);

    unsigned int mask = 0xFF000000; // маска для старшего байта

    // Инвертируем биты старшего байта
    N ^= mask;

    printf("%u\n", N);

    return 0;
}
