#include <stdio.h>

int main(void) {
    int N,M;
    scanf("%d %d",&N,&M);
    char ch[M];
    int W[N], B[N];
    for(int i=0;i<N;i++) {
        scanf("%s", &ch);
        printf("%s\n",ch);
        int j=0;
        B[i]=0, W[i]=0;
        while(ch[j]!='\0'){
            if(j%2==0) {
                if(ch[j] == 'B') (i%2==0?W[i]++:B[i]++);
                else if(ch[j] == 'W') (i%2==0?B[i]++:W[i]++);
        }
            else {
                if (ch[j] == 'B') (i%2==0?B[i]++:W[i]++);
                else if(ch[j] == 'W') (i%2==0?W[i]++:B[i]++);
            }
            j++;
            }
        }
    int ws[(M-7)*(N-7)], bs[(M-7)*(N-7)];
    for (register int i=0;i<N;i++){ws+=W[i];}
    for (register int i=0;i<N;i++){bs+=B[i];}
    printf("%d %d", ws, bs);
}
