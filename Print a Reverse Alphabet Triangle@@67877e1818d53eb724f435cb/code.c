#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        for (int j =n;j>=i;j--){
            printf("%c",70-j)
        }
        printf("\n");
    }
    return 0;
}