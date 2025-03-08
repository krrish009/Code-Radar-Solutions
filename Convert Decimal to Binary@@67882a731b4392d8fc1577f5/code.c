#include <stdio.h>

void decimalToBinary(unsigned int num) {
    int binary[32]; // Array to store binary digits
    int i = 0;

    if (num == 0) {
        printf("0");
        return;
    }

    while (num > 0) {
        binary[i] = num % 2; // Store remainder (binary digit)
        num /= 2; // Divide by 2 to get the next bit
        i++;
    }

    // Print binary in reverse order
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
}

int main() {
    unsigned int num;
   
    scanf("%u", &num);


    decimalToBinary(num);
 

    return 0;
}
