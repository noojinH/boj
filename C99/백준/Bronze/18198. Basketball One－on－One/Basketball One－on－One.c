#include <stdio.h>
int A,B;

int main(void){
    char W;
    int t;
    char in[201] = {' '};
    scanf("%s", in);
    register int i=0;
    while(1){
        W = in[i];
        if(W == 'A'){i++; if(in[i]=='1')A++; else A+=2; i++;}
        else if(W == 'B') {i++; if(in[i]=='1')B++; else B+=2; i++;}
        else{if(A>B) printf("A\n"); else printf("B\n"); break;}
    }
    return 0;
}