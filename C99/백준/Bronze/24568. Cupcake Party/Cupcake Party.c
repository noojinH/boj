#include<stdio.h>

int main(){
    unsigned R,S;
    scanf("%u %u", &R, &S);
    unsigned sum = R * 8 + S * 3;
    if(sum<29)
        printf("%u", sum % 28);
    else
        printf("%u", sum - 28);
    return 0;
}