#include<stdio.h>
int main(void){
    int T;
    scanf("%d", &T);
    for(int i=0;i<T;++i){
        int N;
        scanf("%d", &N);
        long long sum=0;
        for(int j=0;j<N;++j){
            long long cnt;
            scanf("%lld", &cnt);
            sum = (sum+cnt) % N;
        }
        if(sum%N) printf("NO\n"); else printf("YES\n");
    }
}