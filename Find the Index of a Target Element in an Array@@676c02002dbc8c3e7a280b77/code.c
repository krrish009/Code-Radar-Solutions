#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
     for (int i = 0; i < n; i++) {  
        scanf("%d", &arr[i]);
    }
    int key;
    scanf("%d",&key);
     for (int i = 0; i < n; i++) {  
        if(arr[i]==key){
            printf("%d",i);
            }
        else if(i==n){
            printf("-1");
        }
    
    }



    return 0;
}