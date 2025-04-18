#include <stdio.h>

int main(void){
    int in;
    int ved[11]={12,11,11,10,9,9,9,8,7,6,6};
    int pnt[11]={1600,894,1327,1311,1004,1178,1357,837,\
                1055,556,773};
    scanf("%d", &in);
    printf("%d %d", ved[in-1], pnt[in-1]);
    return 0;
}