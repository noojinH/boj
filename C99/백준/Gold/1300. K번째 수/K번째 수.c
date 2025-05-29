#include<stdio.h>
#define ll long long
ll N, k;
_Bool jud(long long m){
    ll cnt=0;
    for(int i=1;i<N+1;i++) cnt += m/i<N? m/i : N;
    return cnt>=k;
}

int main(void){
    scanf("%d%d", &N, &k);
    ll l=0, r=N*N+1;
    while(l+1<r){
        ll m = (l+r) >> 1;
        if(jud(m)) r=m; else l=m;
    }
    printf("%lld\n", r);
    return 0;
}