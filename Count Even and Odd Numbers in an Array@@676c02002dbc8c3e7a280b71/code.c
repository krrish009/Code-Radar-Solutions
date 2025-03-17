// #include <stdio.h>

// int main(){
//     int n;
//     int arr[100];
//     int odd=0;
//     int even=0;
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         scanf("%d",arr[i]);
//     }
//     for(int i=1;i<=n;i++){
//         if(arr[i]%2==0){
//             even+=1;
//         }
//         else{
//             odd+=1;
//         }
//     }
//     printf("%d %d",even,odd);
//     return 0;
// }

#include <stdio.h>

int main() {
    int n;
    
    // Array needs a defined size
    int arr[100]; // Assuming a max size of 100 (can be modified)
    
    int odd = 0, even = 0;

    // Take input for n (number of elements)
    scanf("%d", &n);
    
    // Fix indexing: Array index should start from 0 in C
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Loop to count even and odd numbers
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    // Output the count of even and odd numbers
    printf("%d %d\n", even, odd);

    return 0;
}
