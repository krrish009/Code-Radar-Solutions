#include <stdio.h>

int countLeadingZeros(unsigned int num) {
    if (num == 0) return 32; // Special case for 0 (all bits are zero)
    
    int count = 0;
    while ((num & (1 << 31)) == 0) { // Check the leftmost (MSB) bit
        count++;
        num <<= 1; // Left shift the number to bring the next bit into MSB
    }
    return count;
}

int main() {
    unsigned int num;
    
    scanf("%u", &num);

    int leadingZeros = countLeadingZeros(num);
    printf("%d\n", leadingZeros);

    return 0;
}
