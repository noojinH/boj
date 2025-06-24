#include<cstdio>
#include<cstring>
int main(void){
    char T;
    scanf("%hhd", &T);
    for(char i=0;i<T;++i){
        char foo[1001] = {0};
        scanf("%s", foo);
        printf("%c%c\n", foo[0],foo[strlen(foo)-1]);
    }
    return 0;
}