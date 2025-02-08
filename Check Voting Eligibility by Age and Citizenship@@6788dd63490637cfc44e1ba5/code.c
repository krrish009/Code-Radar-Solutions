#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n,b;
    scanf(" %d %d",&n,&b);
    if(n>=18 && b==1){
        printf("Eligible");
    }
    else{
        printf("Not Eligible");
    }
    return 0;
}