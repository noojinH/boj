#include <stdio.h>

int main(void){
	unsigned long long T;
	int A,B;
	scanf("%llu", &T);
	for(register unsigned long long i=1;i<T+1;i++){
		scanf("%d %d",&A,&B);
		printf("Case #%llu: %d + %d = %d\n",i,A,B,A+B);
	}	
	return 0;
}