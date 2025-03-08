#include <stdio.h>

unsigned int setNthBit(unsigned int num, int n) {
    return num | (1 << n); // Use bitwise OR with a mask to set the nth bit
}

int main() {
    unsigned int num;
    int n;
    scanf("%u", &num);
    scanf("%d", &n);

    unsigned int result = setNthBit(num, n);
    printf("%u\n", n, result);

    return 0;
}


