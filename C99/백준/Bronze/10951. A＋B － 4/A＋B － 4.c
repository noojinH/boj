#include <stdio.h>

int main(void){
	int A=0,B=0;
	while(1){
	if(scanf("%d %d", &A, &B) != EOF) printf("%d\n", A+B);
	else return 0;}
}