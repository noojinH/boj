#include<stdio.h>
#define uc unsigned char
int main(void){
    char U[101];
    char c[] = "CAMBRIDGE";
    scanf("%s", U);
    uc i = 0;
    while(U[i] != 0){
        for(uc k=0;k<9;k++){
            if(c[k] == U[i]){U[i] =97;
           break;}
        }
        i++;
    }
    for(uc j=0;j<i;j++){
        if(U[j]!=97) printf("%c", U[j]);
    }
    printf("\n");
    return 0;
}