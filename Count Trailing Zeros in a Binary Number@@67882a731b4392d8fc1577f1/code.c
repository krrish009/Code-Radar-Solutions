#include <stdio.h>

int countTrailingZeros(unsigned int num) {
    if (num == 0) return 32; // Special case: If number is 0, all bits are zero.

    int count = 0;
    while ((num & 1) == 0) { // Check the rightmost (LSB) bit
        count++;
        num >>= 1; // Right shift to check the next bit
    }
    return count;
}

int main() {
    unsigned int num;
   
    scanf("%u", &num);

    int trailingZeros = countTrailingZeros(num);
    printf("%d\n", trailingZeros);

    return 0;
}
