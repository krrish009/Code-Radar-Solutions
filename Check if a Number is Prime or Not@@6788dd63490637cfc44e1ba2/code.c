#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    for (int i=2;i<=n;i++){
        if(n%i==0){
            isnotprime=1;
        }
    }
    if(isnotprime){
        printf("Not Prime");
    }
    else{
        printf("Prime");
    }
    return 0;
}