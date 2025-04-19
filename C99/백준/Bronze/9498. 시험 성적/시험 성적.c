//90 ~ 100점은 A, 80 ~ 89점은 B, 70 ~ 79점은 C, 60 ~ 69점은 D, 나머지 점수는 F
#include <stdio.h>

int main(void){
    int sc;
    scanf("%d",&sc);
    if(89<sc)printf("A");
    else if(79<sc)printf("B");
    else if(69<sc)printf("C");
    else if(59<sc)printf("D");
    else printf("F");
    return 0;
}