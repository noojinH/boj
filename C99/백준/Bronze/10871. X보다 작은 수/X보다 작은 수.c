#include <stdio.h>
int A[10001];
int main(void){
    int N,X,cnt=0;
    scanf("%d %d", &N,&X);
    for(int i=0;i<N;i++){
        scanf("%d", &A[i]);
        if(A[i]<X)
            printf("%d ",A[i]);
    }
}