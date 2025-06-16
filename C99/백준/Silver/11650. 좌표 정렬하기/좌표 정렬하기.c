#include<stdio.h>
#include<stdlib.h>
typedef struct{
    int x, y;
} pnt;
int cmpx(const void *p, const void *q){
    if(((pnt *)p)->x > ((pnt *)q)->x) return 1;
    else if(((pnt *)p)->x < ((pnt *)q)->x) return -1;
    else{
    if(((pnt *)p)->y > ((pnt *)q)->y) return 1;
    else if(((pnt *)p)->y<((pnt *)q)->y) return -1;
    }
}
int main(void){
    int N;
    scanf("%d", &N);
    pnt *p = malloc(N * sizeof(pnt));
    for(int i=0;i<N;i++)
        scanf("%d %d", &(p[i].x), &(p[i].y));
    qsort(p, N, sizeof(pnt), cmpx);
    for(int i=0;i<N;i++){
        printf("%d %d\n", p[i].x, p[i].y);
    }
    free(p);
    p = NULL;
    return 0;
}