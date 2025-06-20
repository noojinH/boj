#include<stdio.h>
#include<stdlib.h>
#define uc unsigned char
int main(void){
    uc i, j, *p = (uc *)malloc(225 * sizeof(uc));
    for(i=0;i<15;i++){
        for(j=0;j<15;j++)
            scanf(" %c", &p[15*i+j]);
        getchar();
    }
    for(i=0;i<225;i++){
        if(p[i] == 'w'){
            printf("chunbae\n");
            break;
        }
        else if(p[i] == 'b'){
            printf("nabi\n");
            break;
        }
        else if(p[i] == 'g'){
            printf("yeongcheol\n");
            break;
        }
    }
    free(p);
    p = NULL;
    return 0;
}