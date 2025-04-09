// #include <stdio.h>

// int main() {
//     int n;
//     scanf("%d", &n);  // Input size of array

//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//    int maxeven=-1;
//     for(int i=0;i<n;i++){
//         if(arr[i]%2==0){
//             if(arr[i]>maxeven){
//                 maxeven=arr[i];
//             }
//         }
//     }
//     printf("%d",maxeven);
//     return 0;
// }

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // Input size of array

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Input array elements
    }

    int maxEven = -1;
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) { // Check even
            if(arr[i] > maxEven) {
                maxEven = arr[i];  // Update max even
            }
        }
    }

    printf("%d\n", maxEven);  // Print result
    return 0;
}


