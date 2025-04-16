#include <stdio.h>

int main(void){
    int N;
    scanf("%d", &N);
    int Z = 2 * N; getchar();
    char in=65,prev=66;
    for(register int i=0;i<Z;i++){
        scanf("%c", &in); N=i;
        if(in==prev){printf("No"); break;}
        prev = in;
    }
    if(N>Z-2)printf("Yes");
    return 0;
}