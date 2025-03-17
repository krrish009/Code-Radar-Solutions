// #include <stdio.h>
// int isprime(int n){
//     for(int j=2;j<=n/2;j++){
//             if(n%j==0){
//                 return 0;
//         }
//         else{
//             return 1;
//         }
//     }
// }

// int printPrimesInRange(int a, int b){
//     int prime=0;
//     for(int i=a; i<=b; i++){
//         if(isprime(i)){
//             printf("%d",i);
//         }    
//     }
//     if(!(isprime(i))){
//         printf("No prime numbers");
//     }
// }



#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num < 2) return 0; // Numbers less than 2 are not prime
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0; // If divisible, not prime
    }
    return 1; // Prime number
}

// Function to print prime numbers in the given range
void printPrimesInRange(int a, int b) {
    int found = 0; // Flag to track if any prime is found

    for (int i = a; i <= b; i++) {
        if (isPrime(i)) {
            if (found) printf(" "); // Print space before the next number
            printf("%d", i);
            found = 1; // Mark that we found a prime
        }
    }

    if (!found) printf("No prime numbers"); // If no prime found
    printf("\n"); // Print newline at the end
}