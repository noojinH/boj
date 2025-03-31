#include <stdio.h>

int main(void){
    int N = 0;
    int sum = 0;
    scanf("%d", &N);
    for(int i=1;i<N+1;i++){
        sum += i;
    }
    printf("%d", sum);
    return 0;
}