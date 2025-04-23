#include <stdio.h>

int main(void){
    int N,rmd,rwd0,rwd1;
    scanf("%d", &N);
    rwd0 = N * 0.78;
    rmd = N * 0.2;
    rwd1 = N - rmd * 0.22;
    printf("%d %d", (int)rwd0, (int)rwd1);
    return 0;
}