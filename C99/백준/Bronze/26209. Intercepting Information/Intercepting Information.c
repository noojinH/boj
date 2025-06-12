#include<stdio.h>
int main(void){
    char N;
    for(char i=0;i<8;++i){
        scanf("%hhd", &N);
        if(N == 9) {printf("F\n"); return 0;}
    }
    printf("S\n");
    return 0;
}