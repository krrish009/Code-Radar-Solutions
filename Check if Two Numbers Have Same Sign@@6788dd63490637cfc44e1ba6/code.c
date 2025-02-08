#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n,b;
    scanf("%d %d",&n,&b);
    if(n>0 && b>0 || n<0 && b<0){
        printf("Same Sign");
    }
    else{
        printf("Different Sign");
    }
    return 0;
}