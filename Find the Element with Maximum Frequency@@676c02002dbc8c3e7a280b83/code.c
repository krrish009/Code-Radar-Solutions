#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // input size

    int arr[n];
    int freq[100001]={0};
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        freq[arr[i]]++;
    }
    int maxfreq=0,result=100001;
    for(int i=0;i<100001;i++){
        if(freq[i]>maxfreq){
            maxfreq=freq[i];
            result=i;
        }
        else if(maxfreq==freq[i] && i<result){
            result=i;
        }
    }
    printf("%d\n", result);

    return 0;
}
