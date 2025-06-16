#include<stdio.h>
void swap(_Bool *p, _Bool *q){
    if(*p == 1) {*p=0; *q=1;}
    else if(*q==1) {*p=1; *q=0;}
    return;
}
_Bool search(_Bool *cup, char o){
    if(cup[o] == 1) return 1;
    return 0;
}
int main(void){
    char N,i;
    scanf("%hhd", &N);
    char a[N], b[N], g[N];
    for(i=0;i<N;i++)
    scanf("%hhd %hhd %hhd", &a[i], &b[i], &g[i]);
    char rsl[4] = {0};
    for(char j=1;j<4;j++){
    _Bool cup[4] = {0}; cup[j] = 1;
    for(i=0;i<N;i++){
        swap(&cup[a[i]], &cup[b[i]]);
        rsl[j] += search(cup, g[i]);
    }
    }
    char zo = rsl[1]<rsl[2]? rsl[2]:rsl[1];
    if(zo <= rsl[3]) printf("%hhd\n", rsl[3]);
    else printf("%hhd\n", zo);
    return 0;
}