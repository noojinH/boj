#include <stdio.h>

int main(void){
    int N,X;
    int max[100]= {0};
    scanf("%d %d", &N, &X);
    for(int i=0;i<N;++i) scanf("%d", &max[i]);
    int i=1;
    while(1){
        if(max[(i-1) % N] < X) break;
        else {i++; X++;}
    }
    if(i%N!=0) printf("%d\n", i%N);
    else printf("%d\n", N);
    return 0;
}