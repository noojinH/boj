#include <stdio.h>

int main(void){
    int A,B;
    while(1){
        scanf("%d %d", &A, &B);
        if(A == B && B == 0)break;
        printf("%d\n", A+B);
    }
    return 0;
}