#include <stdio.h>

int main(void){
    int A=0,B=0,T=0;
    scanf("%d", &T);
    for(int i=0;i<T;i++){
        scanf("%d %d", &A, &B);
        printf("%d\n", A+B);
    }
    return 0;
}