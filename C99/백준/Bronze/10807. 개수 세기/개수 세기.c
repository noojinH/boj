#include <stdio.h>

int ar[101];
int main(void){
    int N,v,cnt=0;
    scanf("%d", &N);
    for(int i=0;i<N;i++)
        scanf("%d", &ar[i]);
    scanf("%d",&v);
    for(int i=0;i<N;i++)
        if(ar[i] == v)
            cnt++;
    printf("%d",cnt);
    return 0;
}