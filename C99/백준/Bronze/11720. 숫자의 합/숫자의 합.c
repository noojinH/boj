#include <stdio.h>

int main(void){
	char z; int ea;
	unsigned long long sum=0;
	scanf("%d",&ea);
	getchar();
	for(int i=0;i<ea;i++){scanf("%c", &z);
	if('0'<z<':') sum+=z-'0';}
	printf("%llu", sum);
	return 0;
}