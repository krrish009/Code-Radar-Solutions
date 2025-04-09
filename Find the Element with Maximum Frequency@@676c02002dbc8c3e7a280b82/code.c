#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // input size

    int arr[n];
    int freq[100001] = {0}; // assuming max value in array <= 100000

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[arr[i]]++; // count frequency
    }

    int maxFreq = 0, result = 100001;
    for (int i = 0; i < 100001; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            result = i;
        } else if (freq[i] == maxFreq && i < result) {
            result = i; // smaller number wins if tie
        }
    }

    printf("%d\n", result);

    return 0;
}
