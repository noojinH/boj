#include <stdio.h>

int main(void){
    unsigned long long T,cse=0;
    unsigned short A,B;
    scanf("%llu", &T);
    for(register unsigned long long i=0;i<T;i++){
        cse++;
        scanf("%hu %hu", &A, &B);
        printf("Case #%llu: %d\n", cse, A+B);
    }
    return 0;
}