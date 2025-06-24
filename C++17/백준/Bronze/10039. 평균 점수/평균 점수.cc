#include<cstdio>
int main(void){
    char scr;
    short sum=0;
    for(char i=0;i<5;++i){
        scanf("%hhd", &scr);
        sum+=scr<40?40:scr;
    }
    printf("%hhd\n",sum/5);
    return 0;
}