#include <stdio.h>
int main(){
    int n;
    int arr[1000];
    int odd=0, even=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i] % 2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("%d %d\n",even,odd);
    return 0;
}