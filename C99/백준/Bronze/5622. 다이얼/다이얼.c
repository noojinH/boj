#include <stdio.h>
#define M 16

int a2n(char c){
    int rsl=-1;
    if('A'<=c && c<='A'+2)rsl=2;
    else if('D'<=c && c<='D'+2)rsl=3;
    else if('G'<=c && c<='G'+2)rsl=4;
    else if('J'<=c && c<='J'+2)rsl=5;
    else if('M'<=c && c<='M'+2)rsl=6;
    else if('P'<=c && c<='P'+3)rsl=7;
    else if('T'<=c && c<='T'+2)rsl=8;
    else if('W'<=c && c<='W'+3)rsl=9;
    return rsl;
}

int main(void){
    char wrd[M];
    int opd[M],sum=0;
    scanf("%s", wrd);
    for(register int i=0;i<M;++i)
        opd[i]=a2n(wrd[i]);
    for(register int i=0;i<M;++i)
        if(opd[i]>0)sum+= ++opd[i];
    printf("%d", sum);
    return 0;
}