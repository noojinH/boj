#include<cstdio>
int main(void){
    int N;
    scanf("%d", &N);
    char *exp = new char[N+1]{0};
    scanf("%s", exp);
    for(char i=5;i>0;--i){
        putchar(exp[N-i]);
    }
    putchar('\n');
    return 0;
}