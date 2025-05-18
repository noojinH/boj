#include<stdio.h>

int main(){
    int N,M;
    scanf("%d %d", &N, &M);
    char sh[N][M+1];
    for(int i=0;i<N;i++){
      if(M==0) return 0;
      scanf("%s", sh[i]);
      for(int j=0;j<M/2;j++) {
          char tem = sh[i][j];
          sh[i][j] = sh[i][M-1-j];
          sh[i][M-1-j] = tem;
      }
    }
    for (int i=0;i<N;i++) {
        printf("%s\n", sh[i]);
    }
    return 0;
}