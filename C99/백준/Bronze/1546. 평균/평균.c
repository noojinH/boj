#include<stdio.h>
int main(void){
    int N;
    scanf("%d", &N);
    double scr[N];
    for(int i=0;i<N;++i){
        scanf("%lf",&scr[i]);
    }
    for(int i=0;i<N-1;++i){
    for(int j=N-1;j>i;--j){
        if(scr[j-1] > scr[j]) {int tmp = scr[j-1];
            scr[j-1] = scr[j];
            scr[j] = tmp;}
    }
    }
    int M = scr[N-1]; double sum=0;
    for(int i=0;i<N;i++){
        scr[i]/=M;
        scr[i]*=100;
        sum += scr[i];
    }
    printf("%lf", sum / N);
    return 0;
}