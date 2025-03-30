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
    if(n<2){
            printf("-1");
        }
    bubblesort(arr,n);
    int largest = arr[0];  // First element is the largest after sorting

    // Find the first element smaller than `largest`
    for (int i = 1; i < n; i++) {
        if (arr[i] < largest) {
            printf("%d",arr[i]);
            break;  // Found second largest
        }
        else{
            printf("-1");
            break;
        }
    }
    // printf("%d\n", findSecondLargest(arr, n));  // Print result

    
    
    return 0;
}