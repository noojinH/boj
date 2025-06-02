#include<stdio.h>

int main(void){
    char sen[101] = {0}; int i=0;
    scanf("%[^\n]", sen);
    while(sen[i]!=0){
        if(sen[i+1] == 'p'){
            char c = sen[i];
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
                sen[i+1] = -1;
                sen[i+2] = -1;
            }
        }
        i++;
    }
    i=0;
    while(sen[i] !=0){
        if(sen[i] > 0) printf("%c", sen[i]);
        i++;
    }
    printf("\n");
}