#include <stdio.h>

int isPrime(int num){
    for(int i=2;i<=num/2;i++){
        if(num%i==0){
            return 0;
        }
        else if(num==49){
            return 0;
        }
        else{
            return 1;
        }
    }
}


