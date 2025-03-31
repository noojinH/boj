#include <stdio.h>

int main(void){
    int ans = 0;
    scanf("%d", &ans);
    if(ans % 400 == 0){
        printf("1");
    }
    else if(ans % 4 == 0 && ans % 100 != 0)
        printf("1");
    else{
        printf("0");
    }
    return 0;
}