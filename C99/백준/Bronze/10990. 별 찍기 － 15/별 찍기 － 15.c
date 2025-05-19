#include<stdio.h>

int main(void){
    int N;
    scanf("%d", &N);
    for(int i=0;i<N;i++){                                               
        for(int j=0;j<N-1-i;++j) printf(" ");                           
        printf("*");                                                    
        for(int k=0; k<-1+2*i;++k) printf(" ");                         
        if(i>0) printf("*");                                            
        printf("\n");
    }
    return 0;                                                   
}