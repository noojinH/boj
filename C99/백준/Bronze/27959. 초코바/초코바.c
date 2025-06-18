#include<stdio.h>
int main(void){
    char N;
    short M;
    scanf("%hhd %hd", &N, &M);
    if(100 * N >= M) printf("Yes\n");
    else printf("No\n");
    return 0;
}