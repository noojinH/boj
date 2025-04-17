#include <stdio.h>

int main(void){
    int N;
    scanf("%d", &N);
    unsigned long rsl = 1;
    for(register int i=N;i>1;--i){
        rsl *= i;
    }
    printf("%lu", rsl);
    return 0;
}