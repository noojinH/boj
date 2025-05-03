#include <stdio.h>
int r;
int div(int z){
    int q=0;
    while(z>4){
        z-=5;
        q++;
    }
    r=z;
    return q;
}

int main(void){
    int T, c=0, q;
    scanf("%d", &T);
    for(int i=0;i<T;++i) {scanf("%d", &c);
                          q = div(c);
    for(int i=0;i<q;++i) printf("++++ ");
    for(int i=0;i<r;++i) printf("|");
                         printf("\n");}
    return 0;
}