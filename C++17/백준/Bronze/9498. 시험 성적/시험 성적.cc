#include <stdio.h>

int main(void){
    int scr = 0;
    scanf("%d", &scr);
    if(scr > 89)
        printf("A");
    else if(scr > 79)
        printf("B");
    else if(scr > 69)
        printf("C");
    else if(scr > 59)
        printf("D");
    else
        printf("F");
    return 0;
}