#include<stdio.h>
#include<stdlib.h>
#define srt short
int _cmp(const void *p, const void *q){
    if(*(char *)p > *(char *)q) return 1;
    if(*(char *)p < *(char *)q) return -1;
    return 0;
}
int main(void){
    srt n;
    scanf("%hd", &n);
    char a[n];
    for(srt i=0;i<n;i++) scanf("%hhd", a+i);
    qsort(a, n, sizeof(char), _cmp);
    long long rsl=0;
    for(srt el=n;el>1;el--){
        int sum = 0;
        for(srt i=0;i<el-1;i++) sum+= a[i];
        rsl += sum * a[el-1];
    }
    printf("%lld\n", rsl);
}