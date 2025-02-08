#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    if(n<=0){
        printf("Freezing");
    }
    else{
        printf("Above  Freezing");
    }
    return 0;
}