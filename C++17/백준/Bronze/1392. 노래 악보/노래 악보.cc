#include<cstdio>
int main(void){
    char N;
    scanf("%hhd", &N);
    char * ar = new char[N+2]{0};
    short Q;
    scanf("%hd", &Q);
    char * tl = new char[100*N+1]{0};
    short ptr=0;
    for(char i=1;i<=N;++i){
        scanf("%hhd", ar+i);
        for(char j=0;j<ar[i];++j)
            tl[ptr + j] = i;
        ptr+=ar[i];
    }
    delete[] ar;
    short in;
    for(short i=0;i<Q;++i){
        scanf("%hd", &in);
        printf("%hhd\n", tl[in]);
    }
    delete[] tl;
    return 0;
}