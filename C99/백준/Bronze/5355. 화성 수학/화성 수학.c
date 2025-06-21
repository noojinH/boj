#include<stdio.h>
#include<stdlib.h>
int main(void){
    int T;
    scanf("%d", &T);
    getchar();
    while(T--){
        char *tmp = (char *)calloc(12, sizeof(char));
        char num[6] = {0,0,0,0,0,0};
        scanf("%[^\n]", tmp);
        getchar();
        char i=0;
        while(tmp[i] != ' '){
            num[i] = tmp[i];
            i++;
        }
        float rsl = atof(num);
        char op=0;
        while((op = tmp[i++]) != 0){
            if(op == '@') rsl*=3;
            else if(op == '%') rsl+=5;
            else if(op == '#') rsl-=7;
        }
        printf("%.2f\n", rsl);
        free(tmp);
        tmp = NULL;
    }
    return 0;
}