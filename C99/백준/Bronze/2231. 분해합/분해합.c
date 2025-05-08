#include <stdio.h>

int main(void){
    int N;
    scanf("%d", &N);
    int p=N+1, ds;
    for(int i=1;i<N+1;++i){
        ds=i;
        for(register int j=1;i/j>0;j*=10) ds+= i/j%10;
        if(ds==N && i<p) p=i;
    }
    if(p==N+1) p=0;
    printf("%d", p);
    return 0;
}