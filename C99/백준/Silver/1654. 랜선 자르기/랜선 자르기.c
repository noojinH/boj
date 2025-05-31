#include<stdio.h>
_Bool jud(int, int, long long *, long long);
int main(void){
    int K, N;
    scanf("%d %d", &K, &N);
    long long len[K];
    for(int i=0;i<K;i++){
        scanf("%lld", &len[i]);
    }
    long long l = 0, r = 1e11;
    while(l+1<r){
        long long m = (l+r) / 2;
        if(jud(K, N, len, m)){
            l = m;
        }else r=m;
    }
    printf("%lld\n", l);
    return 0;
}
_Bool jud(int K, int N, long long len[], long long m){
    int rsl=0;
    for(int i=0;i<K;i++){
        rsl += (*(len+i)) / m;
    }
    return rsl>=N;
}