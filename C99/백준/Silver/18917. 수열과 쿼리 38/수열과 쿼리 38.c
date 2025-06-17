#include<stdio.h>
int main(void){
    int M;
    scanf("%d", &M);
    int sel, tmp;
    unsigned xs=0;
    long long sum=0;
    while(M--){
        scanf("%d", &sel);
        if(sel==3) printf("%lld\n", sum);
        else if(sel==4) printf("%u\n", xs);
        if((tmp = sel)==1 || sel==2){
            scanf("%d", &sel);
            xs^=sel;
            if(tmp==1) sum+=sel;
            else sum-=sel;
        }
    }
    return 0;
}