#include <stdio.h>

unsigned int getLowestSetBit(unsigned int num) {
    return num & -num; // Isolate the lowest set bit
}

int main() {
    unsigned int num;


    scanf("%u", &num);

    unsigned int result = getLowestSetBit(num);
    printf(" %u\n", result);

    return 0;
}
