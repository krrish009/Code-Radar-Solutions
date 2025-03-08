#include <stdio.h>

int main() {
    int num;
    
    // Input from user
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    // Check MSB using bitwise AND
    if (num & (1 << 31)) {
        printf("Set\n");
    } else {
        printf("Not Set\n");
    }
    
    return 0;
}
