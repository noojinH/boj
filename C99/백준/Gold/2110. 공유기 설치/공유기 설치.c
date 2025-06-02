#include <stdio.h>
#define ll long long
void m_s(ll * x, ll * s, int l, int r){
    if(l>=r) return;
    int m=(l+r)/2;
    m_s(x,s,l,m);
    m_s(x,s,m+1,r);
    int i=l,j=m+1, k=l;
    while(i<=m && j<=r){
        if(x[i]<=x[j]) s[k++] = x[i++];
        else s[k++] = x[j++];
    }
    while(i<=m) s[k++] = x[i++];
    while(j<=r) s[k++] = x[j++];
    for(int i=l;i<=r;i++) x[i] = s[i];
}
_Bool jud(ll * x, int C, ll m, int N){
    int cnt = 1, prev=0, i=1;
    while(i<N) {if(x[i]-x[prev] >= m){cnt++; prev=i;} i++;}
    return cnt>=C;
}
int main(void){
    int N, C; scanf("%d %d", &N, &C);
    ll x[N], s[N];
    for(int i=0;i<N;++i) scanf("%lld", &x[i]);
    m_s(x, s, 0, N-1);
    ll l=-1, r=1e9+1;
    while(l+1<r){
        ll m=(l+r)/2;
        if(jud(x, C, m, N)){
            l=m;
        } else{
            r=m;
        }
    }
    printf("%lld\n", l);
    return 0;
}