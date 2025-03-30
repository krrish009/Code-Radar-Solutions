#include <stdio.h>

// Function to find the absolute value of an integer
int abs_val(int n) {
    return (n < 0) ? -n : n;
}

// Function to swap two integers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to sort an array using bubble sort (for simplicity)
void sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main() {
    int n, i;

    // Read the size of the array
    scanf("%d", &n);

    // Handle the case where there's only one element
    if (n <= 1) {
        printf("-1\n");
        return 0;
    }

    // Allocate memory for the array
    int arr[n];

    // Read the array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sort the array in ascending order (using bubble sort)
    sort(arr, n);

    // Initialize minimum difference to a large value (without limits.h)
    int minDiff = 1000000000; // A large constant

    int num1, num2;

    // Find the pair with the minimum difference
    for (i = 0; i < n - 1; i++) {
        int diff = abs_val(arr[i+1] - arr[i]);
        if (diff < minDiff) {
            minDiff = diff;
            num1 = arr[i];
            num2 = arr[i+1];
        }
    }

    // Output the pair
    printf("%d %d\n", num1, num2);

    return 0;
}
