#include <stdio.h>
int arr[101];
int main(void){
    int N=0,M=0;
    scanf("%d %d", &N, &M);
    for(int k=1;k<N+1;k++) arr[k]=k;
    for(int k=0;k<M;k++){
        int i=0,j=0;
        scanf("%d %d", &i, &j);
        int l=arr[i];
        arr[i] = arr[j];
        arr[j] = l;
    }
    for(int k=1;k<N+1;k++) printf("%d ", arr[k]);
    return 0;
}