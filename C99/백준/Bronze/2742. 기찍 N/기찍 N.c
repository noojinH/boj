#include<stdio.h>
int main(void){
    int N;
    scanf("%d", &N);
    N++; while(--N){
        printf("%d\n", N);
    }
    return 0;
}