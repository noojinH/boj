#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int wrdc(const void *p, const void *q){
    char * cp = *(char**)p, *qp = *(char**)q;
    if(strlen(cp) < strlen(qp)) return -1;
    if(strlen(cp) > strlen(qp)) return 1;
    if(strcmp(cp, qp) > 0) return 1;
    if(strcmp(cp, qp) < 0) return -1;
    strcpy(cp,""); return 0;
}

int main(void){
    short N; char * wrd[20000];
    scanf("%hd", &N);
    for(short i=0;i<N;++i){
        wrd[i] = (char *)calloc(50, sizeof(char));
        scanf("%s", wrd[i]);
    }
    qsort(wrd, N, sizeof(char *), wrdc);
    for(short i=0;i<N;++i) {
        if(strcmp(wrd[i], "")) printf("%s\n", wrd[i]);
        free(wrd[i]);
        wrd[i] = NULL;
    }
    return 0;
}