#include <stdio.h>
int main(void){
    long long A,B;
    scanf("%lld %lld", &A, &B);
    if(A>B) {long long tmp = A;
             A = B;
             B = tmp;
            }
    printf("%lld\n", (B-A+1) * (A+B) / 2);
    return 0;
}