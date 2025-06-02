#include <stdio.h>
int gcd(int A, int B){
    if(A%B==0) return B;
    else return gcd(B, A%B);
}

int main(void){
    int A,B;
    scanf("%d %d", &A, &B);
    int r = gcd(A,B);
    printf("%d\n", r);
    printf("%d\n", A*B / r);
}