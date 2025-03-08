#include <stdio.h>

int isPrime(int num){
    for(int i=1;i<=(num/2);i++){
        if(num%i==0){
            return 0;
        }
        else{
            return 1;
        }
    }
}

// int main() {
    

//     return 0;
// }
