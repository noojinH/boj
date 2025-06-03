#include<stdio.h>
#include<string.h>
#define cm(x) !strcmp(opr, x)
_Bool fun(int L, char opr[], int R){
    if(cm(">")) return L>R;
    else if(cm(">=")) return L>=R;
    else if(cm("<")) return L<R;
    else if(cm("<=")) return L<=R;
    else if(cm("==")) return L==R;
    else return L!=R;
}
int main(void){
    int cse=1;
    while(1){
        int L, R;
        char opr[3];
        scanf("%d %s %d", &L, opr, &R);
        if(cm("E")) break;
        printf("Case %d: %s\n", cse++,fun(L,opr,R)?\
                "true":"false");
    }
    return 0;
}