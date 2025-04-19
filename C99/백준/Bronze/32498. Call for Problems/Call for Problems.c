#include <stdio.h>

int main(void){
    int N,d,r=0;
    scanf("%d", &N);
    for(register int i=0;i<N;++i){
        scanf("%d", &d);
        if(d%2!=0) r++;
    }
    printf("%d",r);
    return 0;
}