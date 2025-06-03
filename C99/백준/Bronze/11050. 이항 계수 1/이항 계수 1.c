#include<stdio.h>
long long fac(char x){
    long long rsl = 1; x+=1;
    if(x==1) return 1;
    while(x--){
        rsl *= x;
        if(x<=2) break;
    }
    return rsl;
}

int main(void){
    char N, K;
    scanf("%hhd %hhd", &N, &K);
    printf("%lld\n", fac(N) / (fac(K) * fac(N-K)));
    return 0;
}