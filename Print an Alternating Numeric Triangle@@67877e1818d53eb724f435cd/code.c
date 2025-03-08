#include<stdio.h>
int main(){
    int n,start;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            start= (i%2==0)? 0:1;
        }
        for(int k=1;k<=i;k++){
            printf("%d ",start);
            start=1-start;
        }
        printf("\n");
    }
    return 0;

}