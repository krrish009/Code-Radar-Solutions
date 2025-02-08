#include <stdio.h>


int main() {
    int cp,sp;
    scanf("%d %d",&cp,&sp);
    int PL=sp-cp;
    if(PL>0){
        printf("Profit");
    }
    else if(PL==0){
        printf("No Profit No Loss");
    }
    else {
        printf("Loss");
    }
    return 0;
}