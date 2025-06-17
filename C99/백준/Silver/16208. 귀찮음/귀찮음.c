#include<stdio.h>
#include<stdlib.h>
#define ll long long
int _cmp(const void *p, const void *q){
    if(*(int *)p > *(int *)q) return 1;
    if(*(int *)p < *(int *)q) return -1;
    return 0;
}
int main(void){
    int n;
    scanf("%d", &n);
    int *a = (int *)malloc(sizeof(int) * n);
    for(int i=0;i<n;i++) scanf("%d", a+i);
    qsort(a, n, sizeof(int), _cmp);
    ll rsl=0;
    ll sum=0;
    for(int i=0;i<n-1;i++) sum+=a[i];
    //printf("%d ", sum);}
    //printf("%d ", sum);
    for(;n>1;n--){
        //printf("%d ", a[n-1]);
        rsl += sum * a[n-1];
        //printf("%lld\n", rsl);
        sum -= a[n-2];
        //printf("%d ", sum);
    }
    printf("%lld\n", rsl);
    free(a);
    a = NULL;
    return 0;
}