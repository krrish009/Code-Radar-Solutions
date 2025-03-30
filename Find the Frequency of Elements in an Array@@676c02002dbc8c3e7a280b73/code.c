// #include <stdio.h>

// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     int visited[n];
//     for(int i=0;i<n;i++){
//         visited[i]=0;
//     }
//     int count=1;
//     for(int i=0;i<n;i++){
//         if(visited[i]==1){
//             continue;
//         }
//         for(int j=i+1;j<n;j++){
//             if(arr[i]==arr[j]){
//                 count++;
//             }
//         }
//         printf("%d %d\n",arr[i],count);
//     }
// }
#include <stdio.h>

int main() {
    int n, i, j;

    // Read the size of the array
    scanf("%d", &n);

    // Allocate memory for the array
    int arr[n];

    // Read the array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Array to keep track of visited elements
    int visited[n];
    for (i = 0; i < n; i++) {
        visited[i] = 0; // Initialize all elements as not visited
    }

    // Find and print the frequency of unique elements
    for (i = 0; i < n; i++) {
        if (visited[i] == 1) {
            continue; // Skip if already visited
        }

        int count = 1; // Count the current element
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1; // Mark the duplicate as visited
            }
        }

        printf("%d %d\n", arr[i], count);
    }

    return 0;
}