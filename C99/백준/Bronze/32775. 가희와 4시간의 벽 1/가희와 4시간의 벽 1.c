#include <stdio.h>

int main(void){
    int T, F;
    scanf("%d", &T);
    scanf("%d", &F);
    if(T>F)printf("flight");
    else printf("high speed rail");
    return 0;
}