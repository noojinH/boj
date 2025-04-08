#include <stdio.h>

int _powsum(){
    int sum=0;
    for(int i=0;i<5;i++){
        int in=0;
        scanf("%d",&in);
        sum+= in * in;
    }
    return sum;
}
int main(void){
    printf("%d",_powsum()%10);
    return 0;
}