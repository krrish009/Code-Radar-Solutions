#include <stdio.h>
int prime(int n){
    for(int j=2;j<=n/2;j++){
            if(n%j==0){
                return 0;
        }
        else{
            return 1;
        }
    }
}

int printPrimesInRange(int a, int b){
    int prime=0;
    for(int i=a; i<=b; i++){
        if(prime(i)){
            printf("%d",i);
        }
        else{
            printf("No prime numbers");
        }
        
             
    }
}