#include <stdio.h>
int arr[1000001];
int main(void){
    int N=0;
    scanf("%d", &N);
    int max=-1000000;
    int min=1000000;
    for(int i=0;i<N;i++){
        scanf("%d", &arr[i]);
        if(arr[i]>max) max=arr[i];
        if(arr[i]<min) min=arr[i];
    }
    printf("%d %d",min,max);
    return 0;
}