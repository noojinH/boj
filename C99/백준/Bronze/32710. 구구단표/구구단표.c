#include<stdio.h>
int main(void){
    int N;
    scanf("%d", &N);
    if(0<N && N<10) {printf("%d\n", 1); return 0;}
    for(int i=2;i<10;i++)
        for(int j=1;j<10;j++)
            if(N==i * j) {printf("%d\n", 1); return 0;}
    printf("%d\n", 0); return 0;
}