#include<cstdio>
#define uc unsigned char
double _pow(uc N){
    double rsl=1;
    while(N--){
        rsl *= 2;
    }
    return rsl;
}
int main(void){
    uc N;
    scanf("%hhu", &N);
    printf("%.*f\n", N, 1.0 / _pow(N));
    return 0;
}