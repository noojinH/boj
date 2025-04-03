#include <stdio.h>
char word[101];
int main(void){
    int cnt=0;
    scanf("%s", word);
    for(int i=0;i<100;i++)
        if(word[i] > 64)
            cnt++;
    printf("%d", cnt);
    return 0;
}