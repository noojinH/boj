#include <stdio.h>

int main(void){
    char CHAR[21];
    scanf("%s", CHAR);
    for(int i=0;i<3;++i){
        for(register int k=0;k<3;++k)
            if(i == 1 && k == 1)printf(":%s:", CHAR);
            else printf(":fan:");
        printf("\n");
    }
    return 0;
}