#include<stdio.h>
#include<stdlib.h>
int p_sum(short x){
    if(x==1) return 0;
    int sum = 1;
    for(short i=2;i<x;i++){
        if(!(x%i)) sum+=i;
    }
    return sum;
}
int main(void){
    short T;
    scanf("%hd", &T);
    short N;
    for(short i=0;i<T;i++) {
        scanf("%hd", &N);
        int n = p_sum(N);
        if(n == N) printf("Perfect\n");
        else if(n > N) printf("Abundant\n");
        else printf("Deficient\n");
    }
    return 0;
}