#include <stdio.h>

int main(void){
	int n,in;
	long long sum=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){scanf("%d",&in); sum+=in;}
	printf("%lld", sum);
	return 0;
}
