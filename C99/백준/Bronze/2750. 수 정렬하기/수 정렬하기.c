#include <stdio.h>

int main(void){
    int ea, in[1000];
    scanf("%d", &ea);
    for(int i =0;i<ea;++i) scanf("%d", &in[i]);
    int tmp;
    for(int i=0;i<ea-1;++i)
        for(register int k=0;k<ea - i -1;++k)
            if(in[k] > in[k+1]){
                tmp = in[k+1];
                in[k+1] = in[k];
                in[k] = tmp;
            }
    for(register int i=0;i<ea;++i) printf("%d ", in[i]);
    return 0;
}