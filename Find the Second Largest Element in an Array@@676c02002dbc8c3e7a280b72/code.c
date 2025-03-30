#include <stdio.h>
int bubblesort(int arr[],int n){
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]<arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

int printArray(int arr[],int n){
    for(int i=0;i<=n-1;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int enterArray(int arr[],int n){
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    enterArray(arr,n);
    bubblesort(arr,n);
    printf("%d",arr[1]);
    
    return 0;
}