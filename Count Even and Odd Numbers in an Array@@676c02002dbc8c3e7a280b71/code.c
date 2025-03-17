#include<stdio.h>

int main(){
    int n
    int arr[];
    int odd=0;
    int even=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",arr[i]);
    }
    for(int i=1;i<=n;i++){
        if(arr[i]%2==0){
            even+=1;
        }
        else{
            odd+=1;
        }
    }
    printf("%d %d",even,odd);
}