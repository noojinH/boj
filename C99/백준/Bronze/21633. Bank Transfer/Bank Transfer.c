#include<stdio.h>
int main(void){
    int k;
    scanf("%d", &k);
    float c = 25 + 0.01 * k;
    c = c>100?c:100;
    c = c<2000?c:2000;
    printf("%.2f\n", c);
}