#include<stdio.h>
int main(void){
    char a,b;
    scanf("%hhd%hhd",&a,&b);
    if(a>=20) {a = 24 - a;
        a += b;}
    else a = b - a;
    printf("%hhd\n", a);
    return 0;
}