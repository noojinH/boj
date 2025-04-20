#include <stdio.h>

int main(void){
    int N,z,k1,cnt=0;
    scanf("%d", &N);
    for(int i=0;i<N;++i){
        scanf("%d", &z);
        if(z==1)continue;
        for(register int k=2;k<z+1;++k){
            if(z%k==0)k1++;
        }
        if(k1==1)cnt++;
        k1=0;
    }
    printf("%d", cnt);
    return 0;
}