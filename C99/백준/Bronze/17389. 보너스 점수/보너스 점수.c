#include<stdio.h>
int main(void){
    short N, streak=0;
    int scr=0;
    scanf("%hd", &N); getchar();
    for(short i=1;i<=N;++i){
        if(getchar() == 'O'){
            scr+=streak++;
            scr+=i;
        }
        else{
            streak=0;
        }
    }
    printf("%d\n", scr);
    return 0;
}