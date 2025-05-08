#include <stdio.h>

int main(void){
    int N,M,rsl=0;
    scanf("%d %d", &N,&M);
    int num[N];
    for(int i=0;i<N;++i) scanf("%d", &num[i]);
    for(int i=N;i>-1;--i)
        for(int j=i-1;j>-1;--j)
            for(register int k=j-1;k>-1;--k){
                int sum = num[i]+num[j]+num[k];
                if(sum<M+1 && rsl<sum) rsl=sum;
            }
    printf("%d", rsl);
    return 0;
}