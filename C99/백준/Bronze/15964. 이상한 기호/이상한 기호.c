#include <stdio.h>

long long p(int z1,int z2){
    long long rsl=0;
    rsl = z1+z2;
    return rsl;
}
int m(int z1, int z2){
    int rsl=0;
    rsl=z1-z2;
    return rsl;
}
int main(void){
    int A=0,B=0;
    scanf("%d %d", &A, &B);
    printf("%lld", p(A,B) * m(A,B));
}