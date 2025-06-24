#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void){
    char n, d, i;
    char  ** set;
    scanf("%hhd", &n);
    for(i=n; i>0; --i){
        scanf("%hhd", &d);
        if(i==1)set = (char **)malloc(d * sizeof(char *));
        for(char j=0;j<d;++j){
            char tmp[21] = {0};
            scanf("%s", tmp);
            if(i==1){
                set[j] = (char *)calloc(strlen(tmp) + 1, \
                    sizeof(char));
                strcpy(set[j], tmp);
            }
        }
    }
    printf("%hhd\n", d);
    for(i=0; i<d; ++i){
        printf("%s\n", set[i]);
        free(set[i]);
        set[i] = NULL;
    }
    free(set);
    set = NULL;
    return 0;
}