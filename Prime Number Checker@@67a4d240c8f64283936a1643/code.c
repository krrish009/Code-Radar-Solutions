#include <stdio.h>

int prime(int n){
    for(int i=1;i<=(n/2);i++){
        if(n%i==0){
            return 0;
        }
        else{
            return 1;
        }
    }
}

int main() {
    

    return 0;
}
