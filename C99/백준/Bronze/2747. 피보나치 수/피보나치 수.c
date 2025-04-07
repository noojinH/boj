#include <stdio.h>

int main(void){
    int fnm=0,fnmm=1,fn=0,nst=0;
    scanf("%d", &nst);
    for(int i=0;i<nst;i++){
        fn = fnmm + fnm;
        fnmm=fnm;
        fnm=fn;
    }
    printf("%d", fn);
    return 0;
}