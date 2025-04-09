#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // Read size of array

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Read elements
    }

    int found = 0;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                printf("%d", arr[i]);
                found = 1;
                break; // Break inner loop
            }
        }
        if(found)
            break; // Break outer loop if repeat found
    }

    if(!found)
        printf("-1");

    return 0;
}

