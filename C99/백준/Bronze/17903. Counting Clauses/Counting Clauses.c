#include<stdio.h>
int main(void){
    char m[5];
    scanf("%hhd %*d", m);
    m[1] = m[0];
    while(m[1]--) scanf("%hhd %hhd %hhd", m+2, m+3, m+4);
    if(*m<8) printf("unsatisfactory\n");
    else printf("satisfactory\n");
    return 0;
}