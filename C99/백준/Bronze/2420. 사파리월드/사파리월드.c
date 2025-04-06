#include <stdio.h>

int main(void){
    int N=0,M=0;
    unsigned int dfr=0;
    scanf("%d %d", &N, &M);
    if(M>=N) dfr = M-N;
    else dfr = N-M;
    printf("%u", dfr);
    return 0;
}