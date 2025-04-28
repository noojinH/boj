#include <stdio.h>

int main(void){
    unsigned u[4], att=0;
    int d[4];
    while(1){
        scanf("%d %d %d %d", &u[0], &u[1], &u[2], &u[3]);
        if(u[0]==u[1] && u[1]==u[2] && u[2]==u[3] && u[3]==0)break;
        _Bool a;
        do{
            a = u[0] == u[1] && u[1]== u[2] && u[2] == u[3];
            if(a==1)break;
            for(register int i=0;i<4;++i){
                if(i==3) d[i] = u[i] - u[0];
                else d[i] = u[i] - u[i+1];
                if(d[i] <0) d[i] *= -1;
            }
            for(register int i=0;i<4;++i) u[i] = d[i];
            att++;
        }while(1);
        printf("%d\n", att);
        att = 0;
    }
    return 0;
}