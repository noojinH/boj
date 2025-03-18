#include <stdio.h>
double A, B;
int main(void){
    scanf("%lf %lf", &A, &B);
    printf("%.32lf\n", A / B);
return 0;
}