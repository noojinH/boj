#include<stdio.h>
#include <stdlib.h>
#define ull unsigned long long
typedef struct{
    ull A:10, B:10, C:10;
}abc;
int main(void){
    char A[5], B[5], C[5];
    abc ABC;
    scanf("%s %s %s", A, B, C);
    ABC.A = atoi(A);
    ABC.B = atoi(B);
    ABC.C = atoi(C);
    printf("%d\n", 3 * ABC.C * ABC.B / ABC.A);
    return 0;
}