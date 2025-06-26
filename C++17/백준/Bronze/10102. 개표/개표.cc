#include<cstdio>
int main(void){
    char V;
    scanf("%hhd", &V);
    getchar();
    char asum=0, bsum=0;
    while(V--){
        char slt;
        scanf("%c", &slt);
        if(slt == 65) ++asum;
        else ++bsum;
    }
    printf("%s", asum==bsum?"Tie\n":asum>bsum?"A\n":"B\n");
    return 0;
}