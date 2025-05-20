#include<stdio.h>
int main(void){
    int n;
    scanf("%d", &n);
    char ot[n+1];
    scanf("%s", ot);
   char wt[n+1];
    scanf("%s", wt);
    int flt=0;
    for(int i=0;i<n+1;i++){
    if(ot[i] != wt[i]) flt++;
    }
    printf("%d\n", flt);
return 0;
}