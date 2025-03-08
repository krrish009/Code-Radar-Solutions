#include<stdio.h>
int main(){
    int n;
    int num=1;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
       
        for(int k=1;k<=i;k++){
            printf("%d ",num++);
        }
        printf("\n");
    }
    return 0;

}