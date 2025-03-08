#include <stdio.h>

unsigned int flipBits(unsigned int num) {
    return ~num; // Bitwise NOT flips all bits
}

int main() {
    unsigned int num, flipped;
  
    scanf("%u", &num);

    flipped = flipBits(num);
    printf("%u\n", flipped);

    return 0;
}
