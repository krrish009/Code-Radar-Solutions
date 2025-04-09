#include <stdio.h>

void rotateRight(int arr[], int n, int k) {
    int rotated[n];
    k = k % n;
    for (int i = 0; i < n; i++) {
        rotated[(i + k) % n] = arr[i];
    }
    for (int i = 0; i < n; i++) {
        arr[i] = rotated[i];
    }
}

int main() {
    int n, k;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);
    rotateRight(arr, n, n - k);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
