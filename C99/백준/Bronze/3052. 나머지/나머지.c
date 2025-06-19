#include<stdio.h>
int main(void){
    short n[10];
    char rsl=0;
    for(char i=0;i<10;++i) n[i] = -1;
    for(char i=0;i<10;++i){
        scanf("%hd", n+i);
        n[i] %= 42;
        for(char j=0;j<=i;++j){
            if(j==i) ++rsl;
            if(n[i] == n[j]) break;
        }
    }
    printf("%hhd\n", rsl);
    return 0;
}