
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // Input size of array

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Input array elements
    }

    int maxEven;
    int found=0;
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) { // Check even
            if(found==0 || arr[i] > maxEven) {
                maxEven = arr[i];  // Update max even
                found=1;
            }
        }
    }
    if(found)
    printf("%d\n", maxEven);
    else{
        printf("-1");
    }  // Print result
    return 0;
}


