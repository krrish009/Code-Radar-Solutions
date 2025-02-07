#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
     int a,b,c;
    scanf("%d %d",&a,&b);
    if (a>b && a>c){
        printf("%d",a);
    }
    else if(b>a && b>c){ 
        printf("%d",b);
    }
    else{
        printf("%d",c)
    }
    return 0;
}