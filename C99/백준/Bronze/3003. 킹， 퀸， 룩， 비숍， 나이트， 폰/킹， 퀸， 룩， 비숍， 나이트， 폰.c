#include<stdio.h>
#define cm(x,y) y-ea[x]
int main(void){
    char ea[6];
    for(char i=0;i<6;++i) scanf("%hhd",ea+i);
    printf("%hhd ", cm(0, 1));
    printf("%hhd ", cm(1, 1));
    printf("%hhd ", cm(2, 2));
    printf("%hhd ", cm(3, 2));
    printf("%hhd ", cm(4, 2));
    printf("%hhd\n", cm(5, 8));
    return 0;
}