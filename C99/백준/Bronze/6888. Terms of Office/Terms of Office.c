#include<stdio.h>
int main(void){
    int X,Y;
    scanf("%d",&X);
    scanf("%d",&Y);
    printf("All positions change in year %d\n", X);
    while(Y-X>59){
        X+= 60;
        printf("All positions change in year %d\n", X);
    }
    return 0;
}