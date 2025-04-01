#include <stdio.h>
int main(void){
    int N,r = 1;
    scanf("%d", &N);
    for(int i=0;i<N;i++){
        for(int j=0;j<r;j++){
            printf("*");
        }
        r++;
    printf("\n");
    }
    return 0;
}