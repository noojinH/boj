#include <stdio.h>

int main(void){
    int in=0;
    scanf("%d", &in);
    int out=1;
    for(int k=in;k>1;k--)out*=k;
    printf("%d", out);
    return 0;
}