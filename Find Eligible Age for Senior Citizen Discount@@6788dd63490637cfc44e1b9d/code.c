#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    if(n>=60){
        printf("Eligible");
    }
    else{
        printf("Not Eligible");
    }
    // printf("%s", welcome());
    return 0;
}