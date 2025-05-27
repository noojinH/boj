#include<stdio.h>
#define uc unsigned char
int rs(uc k, uc n){
    if(k==1){
        int sum = 0;
        for(uc i=1;i<n+1;i++) sum+=i;
        return sum;
    }
    int rsl=0;
    for(int i=1;i<n+1;i++){
        rsl += rs(k-1,i);
    }
    return rsl;
}
int main(void){
    uc k,n;
    int T, rsl;
    scanf("%d", &T);
    for(int i=0;i<T;i++){
        scanf("%hhd", &k);
        scanf("%hhd", &n);
        printf("%d\n", rs(k,n));
    }
    return 0;
}