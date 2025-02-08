#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float a,b;
    char n;
    scanf("%f %f %c",&a,&b,&n);
    switch(n){
        case '+':
        printf("%.f",a+b);
        break;
        case '-':
        printf("%.f",a-b);
        break;
        case '*':
        printf("%.f",a*b);
        break;
        case '/':
        printf("%.f",a/b);
        break;
        default :
        printf("error");
        break;
    }
    return 0;
}