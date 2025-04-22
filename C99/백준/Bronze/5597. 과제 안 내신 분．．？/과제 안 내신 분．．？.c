#include <stdio.h>
#define N 30

int main(void){
    int num[N],msd[2],ea=0,tmp;
    for(register int i =0;i<N-2;i++){
        scanf("%d", &num[i]);
    }
    for(int i=1;i<=N;i++){
        tmp = 0;
        for(register int k=0;k<N-2;k++){
            if(num[k] == i)tmp=1;
        }
        if(tmp==0){msd[ea] = i;
                   ea++;}
    }
    if(msd[0]>msd[1]){
        tmp = msd[0];
        msd[0]=msd[1];
        msd[1]=tmp;
    }
    printf("%d\n%d\n", msd[0], msd[1]);
    return 0;
}