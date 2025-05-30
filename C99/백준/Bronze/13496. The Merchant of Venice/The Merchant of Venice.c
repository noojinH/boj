#include<stdio.h>
int main(void){
    int K;
    scanf("%d", &K);
    int rsl[K+1];
    for(int i=1;i<=K;i++){
        int n,s,d,di,vi;
        rsl[i]=0;
        scanf("%d %d %d", &n, &s, &d);
        for(int j=0;j<n;j++){
            scanf("%d%d", &di, &vi);
            if(d >= (float)di / s) rsl[i]+=vi;
        }
    }
    for(int i=1;i<=K;i++){
        printf("Data Set %d:\n%d\n\n", i, rsl[i]);
    }
    return 0;
}