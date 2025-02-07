#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%f",&n);
    printf("You entered: %.4f", n);
    return 0;
}