#include <stdio.h>

char S[1001];
int main(void){
    int i = 0;
    scanf("%s", S);
    scanf("%d", &i);
    printf("%c", S[i-1]);
    return 0;
}