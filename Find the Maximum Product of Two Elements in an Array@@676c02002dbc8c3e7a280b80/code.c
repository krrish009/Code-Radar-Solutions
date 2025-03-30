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
    if (n < 2) {
        printf("-1\n");  // If less than 2 elements, multiplication is not possible
        return 0;
    }
    enterArray(arr, n);
    bubblesort(arr,n);
    int mul=arr[0]*arr[1];
    printf("%d",mul);

    return 0;
}