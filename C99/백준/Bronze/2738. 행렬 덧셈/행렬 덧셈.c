#include <stdio.h>

int main(void){
    int N,M;
    scanf("%d %d\n", &N,&M);
    int mx0[N][M], mx1[N][M];
    for(int i=0;i<N;i++){
        for(register int k=0;k<M;k++){
            scanf("%d", &mx0[i][k]);
        }
    }
    for(int i=0;i<N;i++){
        for(register int k=0;k<M;k++){
            scanf("%d", &mx1[i][k]);
        }
    }
    for(int i=0;i<N;i++){
        for(register int k=0;k<M;k++){
            mx0[i][k] += mx1[i][k];
        }
    }
    for(int i=0;i<N;i++){
        for(register int k=0;k<M;k++){
            printf("%d ", mx0[i][k]);
        }
        printf("\n");
    }
    return 0;
}