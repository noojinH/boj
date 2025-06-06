#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void){
    char tmp[32];
    scanf("%[^\n]", tmp);
    if(!strcmp(tmp, "0")) {printf("W\n"); return 0;}
    char ini = tmp[0], ef[5] = {0}, st[5] = {0}; int i=0;
    if(ini == '-'){
        printf("-"); i = 1;
    }
    for(int x=0;tmp[i] != 'x' && x<5;i++,x++)
        ef[x] = tmp[i];
    if(tmp[i] == 'x'){
    int co = atoi(ef) / 2;
    if(co!=0 && co!=1) printf("%d", co);
    printf("xx");
    if(tmp[i+1] == '-') {printf("-");}
    else if(tmp[i+1] != 0) printf("+"); i++;
    if(tmp[i+1] != 0){
        for(int x=0;tmp[i+1]!=0;i++,x++) st[x] = tmp[i+1];
        int con = atoi(st);
        if(con != 0 && con != 1) printf("%d", con);
        printf("x");
    }
    }
    else {
        if(strcmp(ef,"1") && strcmp(ef, "-1")) printf("%s", ef);
        printf("x");
    }
    printf("+W\n");
    return 0;
}