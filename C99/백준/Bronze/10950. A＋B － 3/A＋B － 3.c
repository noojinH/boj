#include <stdio.h>

int main(void){
    unsigned short in;
    int A=0,B=0;
    int out[66000];
    scanf("%hu", &in);
    for(int i=0;i<in;i++){
        scanf("%d %d", &A, &B);
        out[i] = A+B;
        }
    for(int i=0;i<in;i++){
        printf("%d\n", out[i]);
    }
    return 0;
    }