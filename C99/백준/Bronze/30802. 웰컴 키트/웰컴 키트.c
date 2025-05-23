#include<stdio.h>
int main(void){
    int N;
    scanf("%d", &N);
    int S, M, L, XL, XXL, XXXL;
    scanf("%d %d %d %d %d %d", &S, &M, &L, &XL, &XXL, &XXXL);       int T, P;
    scanf("%d %d", &T, &P);
    int rsl=0;
    rsl += S/T; if(S%T>0)rsl++;
    rsl += M/T; if(M%T>0)rsl++;
    rsl += L/T; if(L%T>0)rsl++;
    rsl += XL/T; if(XL%T>0)rsl++;
    rsl += XXL/T; if(XXL%T>0)rsl++;
    rsl += XXXL/T; if(XXXL%T>0)rsl++;
    int pea = N / P;
    int ap = N%P;
    printf("%d\n%d %d\n", rsl, pea, ap);
    return 0;
}