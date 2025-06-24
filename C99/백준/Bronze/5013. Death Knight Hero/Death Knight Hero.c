#include<stdio.h>
int main(void){
    char n;
    scanf("%hhd", &n);
    char rsl=n;
    for(char i=0;i<n;++i){
        char tmp[1001] = {0};
        scanf("%s", tmp);
        short j=0;
        while(tmp[j+1] != 0){
            if(tmp[j] == 'C' && tmp[j+1] == 'D')
            {--rsl; break;}
            ++j;
        }
    }
    printf("%hhd\n", rsl);
    return 0;
}