#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define LEN 1000000
int main(void){
    char *a = (char *)calloc(LEN+1, sizeof(char));
    scanf("%[^\n]", a);
    int wrd = 0;
    if(strcmp(a, "") && strcmp(a," ")) wrd++;
    //printf("%ld ", strlen(a));
    for(int i=0; i+3<=strlen(a); i++){
        if(a[i] != ' ' && a[i+1] == ' ' && a[i+2] != ' ')
            wrd++;
    }
    printf("%d\n", wrd);
    free(a);
    a = NULL;
    return 0;
}