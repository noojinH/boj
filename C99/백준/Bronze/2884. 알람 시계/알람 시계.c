#include <stdio.h>

int main(void){
    int H,M = 0;
    scanf("%d %d", &H, &M);
    if(M - 45 < 0){
        H--;
        if(H < 0){
            H += 24;
        }
        M += 15;
    }
    else{
        M -= 45;
    }
    printf("%d %d", H, M);
    return 0;
}