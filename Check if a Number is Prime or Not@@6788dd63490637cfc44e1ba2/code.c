#include <stdio.h>

int main() {
    int n;
    int isnotprime;
    scanf("%d",&n);
    for (int i=2;i<n;i++){
        if(n%i==0){
            isnotprime=1;
            break;
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