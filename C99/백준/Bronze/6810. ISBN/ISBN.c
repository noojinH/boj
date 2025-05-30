#include<stdio.h>
int main(void){
    char ib[14] = "9780921418";
    for(char i=10;i<13;i++){
        scanf("%c", &ib[i]);
        getchar();
    } int sum = 0;
    for(char i=0;i<13;i++){
        ib[i] -= '0';
        if(i%2) ib[i] *= 3;
        sum += ib[i];
    }
    printf("The 1-3-sum is %d\n", sum);
    return 0;
}