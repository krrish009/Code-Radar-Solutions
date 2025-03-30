#include <stdio.h>

void bubblesort(int arr[], int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {  // Sort in descending order
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void enterArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {  
        scanf("%d", &arr[i]);
    }
}



int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    enterArray(arr, n);
    if(n==1){
        printf("-1");
    }
    bubblesort(arr,n);
    int diff1=arr[1]-arr[0];
    int diff2=arr[n-1]-arr[n];
    if(diff1<diff2){
        print("%d %d",arr[1],arr[0]);
    }
    else{
         print("%d %d",arr[n-1],arr[n]);
    }

    return 0;
}