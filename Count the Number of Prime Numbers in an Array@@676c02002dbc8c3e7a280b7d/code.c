#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) {
        return 0; // Not prime
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // Not prime
        }
    }

    return 1; // Prime
}

int main() {
    int n, i, count = 0;

    // Read the size of the array
    scanf("%d", &n);

    // Allocate memory for the array
    int arr[n];

    // Read the array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Count the prime numbers
    for (i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            count++;
        }
    }

    // Output the count of prime numbers
    printf("%d\n", count);

    return 0;
}