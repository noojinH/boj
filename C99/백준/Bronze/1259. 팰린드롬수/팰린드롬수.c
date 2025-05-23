#include<stdio.h>
#include<string.h>
int main(void){
    while(1){
        char in[5]="0";
        scanf("%s", in);
        if(!strcmp(in, "0")) break;
        int exn = strlen(in);
        _Bool a=0;
        for(int i=0;i<exn/2;i++)
            if(in[i] != in[exn-1-i]) a = 1;
        if(!a) printf("yes\n");
        else printf("no\n");
    }
    return 0;
}