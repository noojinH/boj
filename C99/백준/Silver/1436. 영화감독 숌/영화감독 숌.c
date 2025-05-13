#include <stdio.h>

int main(void){
    int N=666, t;
    scanf("%d", &N);
    int sx=0, ty=0, r=0;
    for (int i = 666; i <3000000 ; i++) {
        sx=0;
        for(int k=1;i/k>0;k*=10) {
            t=i/k%10;
            if (t == 6) {sx++; ty++;}
            else ty=0;
            if (sx > 2 && ty>2) {r++; break;}
        }
        if (r==N) {
            printf("%d\n", i);
            break;
        }
    }
    return 0;
}