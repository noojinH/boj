#include <stdio.h>

int gcd(int,int);
int main(void){
    int n,a,b;
    scanf("%d", &n);
    for(register int i=0;i<n;++i){
        scanf("%d %d", &a, &b);
        printf("%d\n", gcd(a,b));
    }
    return 0;
}
    
int gcd(int a, int b){
    if(a<b){int tmp;
            tmp=b; b=a; a=tmp;}
    if(a%b==0) return b;
    else return gcd(a%b,b);
}