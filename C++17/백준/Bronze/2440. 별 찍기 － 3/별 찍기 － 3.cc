#include<cstdio>
int main(void){
    char N;
    scanf("%hhd", &N);
    while(N){
        for(char i=N;i>0;--i)
            putchar('*');
        putchar('\n');
        --N;
    }
    return 0;
}