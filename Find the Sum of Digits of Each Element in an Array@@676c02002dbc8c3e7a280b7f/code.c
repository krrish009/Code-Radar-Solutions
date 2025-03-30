#include <stdio.h>
#include <stdlib.h> // For abs()

// Function to calculate the sum of digits of a number (handles negative numbers)
int sumOfDigits(int num) {
    int sum = 0;
    num = abs(num); // Make the number positive for digit extraction
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int n, i;

    // Read the size of the array
    scanf("%d", &n);

    // Allocate memory for the array
    int arr[n];

    // Read the array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate the sum of digits for each element and output
    for (i = 0; i < n; i++) {
        printf("%d ", sumOfDigits(arr[i]));
    }


    return 0;
}