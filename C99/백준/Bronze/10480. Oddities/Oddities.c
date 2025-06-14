#include <stdio.h>
int main(void){
    char n[2];
    scanf("%hhd", n);
    while(n[0]--){
        scanf("%hhd", n+1);
        if(n[1] % 2) printf("%hhd is odd\n", n[1]);
        else printf("%hhd is even\n", n[1]);
    }
    return 0;
}