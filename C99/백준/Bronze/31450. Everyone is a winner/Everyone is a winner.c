#include <stdio.h>
long M,K;

int main(void){
    scanf("%ld %ld", &M, &K);
    if(M%K == 0) printf("Yes");
    else printf("No");
    return 0;
}