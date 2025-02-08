#include <stdio.h>


int main() {
    int cp,sp;
    scanf("%d %d",&cp,&sp);
    PL=sp-cp;
    if(PL>0){
        printf("Profit");
    }
    else{
        printf("Loss");
    }
    return 0;
}