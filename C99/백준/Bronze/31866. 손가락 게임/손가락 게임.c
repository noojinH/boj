#include<stdio.h>
static inline _Bool check(char j){
    if(j == 1 || j == 3 || j == 4) return 0;
    return 1;
}

int main(void){
    char j, i;
    scanf("%hhd %hhd", &j, &i);
    if(!check(j)){
        if(check(i)) printf("<");
        else printf("=");
    } else{
        if(!check(i)) printf(">");
        else{
            if (j==0){
                if(i==2) printf(">");
                else if(i==0) printf("=");
                else printf("<");
            }
            else if(j==2){
                if(i==0) printf("<");
                else if(i==2) printf("=");
                else printf(">");
            }
            else if(j==5){
                if(i==0) printf(">");
                else if(i==5) printf("=");
                else printf("<");
            }
        }
    }
    printf("\n");
    return 0;
}