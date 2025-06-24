#include<cstdio>
void swap(char*a,char*b){
    char tmp = *a;
    *a = *b;
    *b = tmp;
}
int main(void){
    char A, B, C;
    scanf("%hhd %hhd %hhd", &A, &B, &C);
    if(A>B) swap(&A,&B);
    if(B>C) swap(&B,&C);
    if(A>B) swap(&A,&B);
    printf("%hhd\n", B);
    return 0;
}