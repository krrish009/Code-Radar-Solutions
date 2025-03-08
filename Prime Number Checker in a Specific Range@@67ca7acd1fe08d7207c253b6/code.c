#include <stdio.h>

int printPrimesInRange(int a, int b){
    int prime=0;
    for(int i=a; i<=b; i++){
        for(int j=2;j<=i/2;j++){
            if(i%j==0){
                printf("no prime exixt in the range");
            }
            else{
                printf("%d",i);
            }
        }
    }
}