#include <stdio.h>

int main(void){
    int ea;
    char in[11],cre[6]={[5]=0};
    scanf("%s", in);
    for(register int i=0;i<5;++i) cre[i]=in[i];
    scanf("%d", &ea);
    char cde[11];
    int rsl=0;
    for(int i=0;i<ea;++i){
        scanf("%s", cde);
        for(register int k=0;k<5;++k){
            if(cre[k]!=cde[k]) break;
            if(k==4) rsl++;
        }
    }
    printf("%d", rsl);
    return 0;
}