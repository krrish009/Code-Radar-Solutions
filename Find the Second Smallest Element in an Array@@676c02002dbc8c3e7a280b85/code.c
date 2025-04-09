// #include <stdio.h>

// void bubblesort(int arr[], int n) {
//     int temp;
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = 0; j < n - i - 1; j++) {
//             if (arr[j] < arr[j + 1]) {  // Sort in descending order
//                 temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
// }

// void enterArray(int arr[], int n) {
//     for (int i = 0; i < n; i++) {  
//         scanf("%d", &arr[i]);
//     }
// }



// int main() {
//     int n;
//     scanf("%d", &n);
//     int arr[n];
//     enterArray(arr, n);
//     if(n<2){
//         printf("-1");
//     }
//     bubblesort(arr,n);
//     printf("%d",arr[n-2]);

//     return 0;
// }




#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int first = INT_MAX, second = INT_MAX;

    for (int i = 0; i < n; i++) {
        if (arr[i] < first) {
            second = first;
            first = arr[i];
        } else if (arr[i] < second && arr[i] != first) {
            second = arr[i];
        }
    }

    if (second == INT_MAX) {
        printf("-1\n");
    } else {
        printf("%d\n", second);
    }

    return 0;
}
