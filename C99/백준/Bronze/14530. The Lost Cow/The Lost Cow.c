#include <stdio.h>

int main(void){
    int x,y;
    scanf("%d %d", &x, &y);
    int dst=x, p ,fct=1,att=0,rsl=0;
    while(1){
        p=dst;
        att++;
        if(att%2==0){
            dst = x - fct;
            if(x>y&&dst<=y) break;
            rsl += p-dst;
        } else{
            dst = x + fct;
            if(x<y&&dst>=y) break;
            rsl += dst-p;
        }
        fct *= 2;
    }
    rsl += y>p?y-p:p-y;
    printf("%d\n", rsl);
    return 0;
}