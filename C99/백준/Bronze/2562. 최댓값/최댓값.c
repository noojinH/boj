#include <stdio.h>
int arr[10];
int main(void){
    int max=0,p=0;
    for(int i=0;i<10;i++){
        scanf("%d", &arr[i]);
        if(arr[i]>max){max=arr[i]; p=i;}
    }
    printf("%d\n%d", max, p+1);
}