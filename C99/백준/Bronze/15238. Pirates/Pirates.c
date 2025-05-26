#include<stdio.h>

int main(void){
    short fr[26] = {0};
    short sz;
    scanf("%hd", &sz);
    getchar();
    for(short i=0;i<sz;i++){
        char tmp;
        scanf("%c", &tmp);
        fr[tmp - 'a']++;
        }
    short max = fr[0];
    char room=0;
    for(char i=0;i<25;i++){
        if(max < fr[i+1]){max = fr[i+1]; room = i+1;}
    }
    printf("%c %hd\n", room + 'a', max);
    return 0;
}