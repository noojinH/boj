#include<stdio.h>

int main(){
    int N,S,x;
    while(scanf("%d %d", &N, &S) == 2){
        printf("%d\n", S / (N + 1));
      }
    return 0;
}