#include <stdio.h>


int main() {
    int cp,sp;
    scanf("%d %d",&cp,&sp);
    int PL=sp-cp;
    if(PL>0){
        printf("Profit");
    }
    else if(Pl<0){
        printf("Loss");
    }
    else{
        printf("No Profit No Loss");
    }
    return 0;
}