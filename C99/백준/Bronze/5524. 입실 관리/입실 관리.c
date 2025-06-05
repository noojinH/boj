#include <stdio.h>
int main() {
    char N;
    scanf("%hhd", &N);
    for(int i=0;i<N;++i) {
        char t=0,j=0, *tp;
        char S[21] ={0};
        scanf("%s", S);
        while(t = S[j++]){
            //printf("%c\n", t);
            tp = &S[j-1];
            //printf("%c\n", *tp);
            if('A'<=t && t<='Z')
                *tp = t + 32;        
        }
        printf("%s\n", S);
    }
    return 0;
}