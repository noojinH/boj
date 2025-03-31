#include <stdio.h>

int main(void){
    int A,B,f,s,t= 0;
    scanf("%d %d", &A, &B);
    f = B / 100;
    s = B / 10 - f * 10;
    t = B % 10;
    printf("%d\n%d\n%d\n%d",A*t,A*s,A*f,A * B);
    return 0;
}