#include<stdio.h>
int main(void){
    short N,M; int seat=0, K;
    scanf("%hd %hd %d", &N, &M, &K);
    for(int i=0;i<N;++i)
        for(int j=0;j<M;++j)
            if(seat++ == K){
                printf("%hd %hd\n", i, j);
                return 0;
            }
    return 0;
}