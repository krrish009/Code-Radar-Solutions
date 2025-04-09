#include <stdio.h>

// Function to find the first peak element
int findFirstPeak(int arr[], int n) {
    if(n==0){
        return arr[0];
    }
    for(int i=0;i<n;i++){
        if(i==0 &&arr[i]>arr[i+1]){
            return arr[i];
        }
        else if(i==n-1 && arr[i]>arr[i-1]){
            return arr[i];
        }
        else if(i>0 && i<n-1 && arr[i]>arr[i+1] && arr[i]>arr[i-1]){
            return arr[i];
        }

    }
    return -1;
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    // Read array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int peak=findFirstPeak(arr,n);
    printf("%d",peak);
    

    return 0;
}
