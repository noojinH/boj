#include<stdio.h>
#include<stdlib.h>
struct member{
    unsigned char age;
    char name[101];
} mem[100000];
int cmp(const void *p, const void *q){
    if(((struct member *)p)->age > ((struct member *)q)->age)           return 1;
    else return -1;
}
int main(void){
    int N;
    scanf("%d", &N);
    for(int i=0;i<N;i++){
        scanf("%hhu %s", &mem[i].age, mem[i].name);
    }
    qsort(mem, N, sizeof(struct member), cmp);
    for(int i=0;i<N;i++){
        printf("%hhu %s\n", mem[i].age, mem[i].name);
    }
    return 0;
}