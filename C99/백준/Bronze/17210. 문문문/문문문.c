#include <stdio.h>

int main(void){
    long long N, stp=1;
    char c; _Bool f;
    scanf("%lld %c", &N, &c);
    if (c==48) f=0; else f=1;
    if (N>5) {printf("Love is open door"); return 0;}
    while (++stp<N+1) {
        if (stp % 2 == 0) printf("%d\n", !f);
        else if (stp % 3 == 0) printf("%d\n", f);
        else printf("%d\n", f);
    }
    return 0;
}