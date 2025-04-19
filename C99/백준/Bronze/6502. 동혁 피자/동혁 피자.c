#include <stdio.h>
unsigned _pow(unsigned z){
    z *= z;
    return z;
}
int main(void){
    unsigned cse=0, r=-1,w,l;
    while(r!=0){
        ++cse;
        scanf("%u", &r);
        if(r==0)break;
        scanf(" %u %u",&w,&l);
        printf("Pizza %u ", cse);
        if(_pow(w) + _pow(l) > 4*_pow(r)){
            printf("does not fit");
        }
        else printf("fits");
        printf(" on the table.\n");
    }
    return 0;
}