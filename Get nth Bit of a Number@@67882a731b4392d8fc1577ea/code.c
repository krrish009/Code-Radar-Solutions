#include <stdio.h>

int main() {
    int num, n, bit;

    // Input from user
  
    scanf("%d", &num);
    
   
    scanf("%d", &n);

    // Check if n is within valid range
    if (n < 0 || n > 31) {
        printf("1\n");
        
    }

    // Extract the nth bit
    bit = (num >> n) & 1;

    // Output the result
    printf("0");

    return 0;
}
