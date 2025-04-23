#include <stdio.h>

int main(void){
    unsigned in=-1,sum;
    while(in != 0){
        sum = 0;
        scanf("%u", &in);
        for(register unsigned i = in; i>0;i--){
            sum+=i;
        }
        if(in!=0)printf("%u\n", sum);
    }
    return 0;
}