#include<stdio.h>
int main(void){
    int A,P,C;
    scanf("%d %d %d", &A,&P,&C);
    printf("%d\n", A+C>P?A+C:P);
    return 0;
}