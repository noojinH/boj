#include <stdio.h>
int arn[101];
int main(void){
    int N,M,i,j,k;
    N=M=i=j=k=0;
    scanf("%d %d", &N,&M);
    for(int o=0;o<M;o++){
        scanf("%d %d %d",&i,&j,&k);
        for(int p=i;p<j+1;p++) arn[p-1]=k;
    }
    for(int q=0;q<N;q++) printf("%d ",arn[q]);
    return 0;
}