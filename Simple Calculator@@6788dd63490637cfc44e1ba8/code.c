#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a,b,n;
    scanf(" %d %d %d",,&a,&b,&n);
    switch(n){
        case '+':
        printf("&d",a+b);
        break;
        case '-':
        printf("&d",a-b);
        break;
        case '*':
        printf("&d",a*b);
        break;
        case '/':
        printf("&d",a/b);
        break;
    }
    return 0;
}