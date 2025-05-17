#include<stdio.h>

int main(){
    char wrd[101]; int b=0,r=0;
    scanf("%s", wrd);
    for(int i=0;i<101;i++){
      if(wrd[i] != 0) b++;
      }
      for(int i=0;i<b;i++){
        char c = wrd[i];
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
          r++;
      }
      printf("%d\n", r);
    return 0;
}