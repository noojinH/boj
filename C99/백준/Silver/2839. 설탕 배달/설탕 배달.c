#include <stdio.h>

int main(void) {
    int N,rsl=1234;
    scanf("%d", &N);
    for (int i=0;i<=N/3;++i) {
        for (register int j=0;j<=N/5;++j) {
            if (3*i+5*j == N) if (i+j<rsl)
                rsl = i+j;
        }
    }
    if(rsl==1234) rsl=-1;
    printf("%d",rsl);
    return 0;
}