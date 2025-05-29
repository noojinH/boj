#include<stdio.h>
#define ll long long
int namu;
ll M, Height[1000000];

_Bool jud(int m){
    ll sum = 0;
    for(int i=0;i<namu;i++) if(Height[i]>m) sum+=Height[i]-m;       
    return sum>=M;
}

int main(void){
    scanf("%d %lld", &namu, &M);
    for(int i=0;i<namu;i++) scanf("%lld", &Height[i]);
    ll l=-1, r=2*1e9;
    while(l+1 < r){
        ll m = (l+r) >> 1;
        if(jud(m))l = m; else r = m;
    }
    printf("%lld\n", l);
    return 0;
}