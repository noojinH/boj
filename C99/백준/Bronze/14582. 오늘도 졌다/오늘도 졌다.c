#include<stdio.h>
int main(void){
    char j[9], s[9], i, w=0;
    unsigned char J=0, S=0;
    for(i=0;i<9;++i)
        scanf("%hhd", &j[i]);
    for(i = 0;i<9;++i)
        scanf("%hhd", &s[i]);
    for(i = 0;i<9;++i){
        J+=j[i];
        if(J>S) w=1;
        S+=s[i];
        if(J>S) w=1;
    }
    if(w) printf("Yes\n");
    else printf("No\n");
    return 0;
}