#include <stdio.h>

int main(void){
    int f,s,t = 0;
    scanf("%d %d %d", &f, &s, &t);
    if(f == s && s == t){
        printf("%d", 10000 + f * 1000);
    }
    else if(f==s){
        printf("%d", 1000 + 100 * f);
    }
    else if(s==t){
        printf("%d", 1000 + 100 * s);
    }
    else if(f==t){
        printf("%d", 1000 + 100 * f);
    }
    else if((f<s && s<t) || (s<f && f<t)){
        printf("%d", 100 * t);
    }
    else if((f<t && t<s) ||(t<f && f<s)){
        printf("%d", 100 * s);
    }
    else{
        printf("%d", 100 * f);
    }
    return 0;
}