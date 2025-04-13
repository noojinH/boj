#include <stdio.h>

int sqr(int z){
	int rsl = z*z;
	return rsl;
}
int main(void){
	int a,b,c;
	while(1){
	scanf("%d %d %d", &a, &b, &c);
	if(a==b && b==c && c==0)break;
	if(a<=b && b<=c || b<=a && a<=c) if(sqr(c)==sqr(a)+sqr(b)) printf("right"); else printf("wrong");
	if(a<=c && c<=b || c<=a && a<=b) if(sqr(b)==sqr(a)+sqr(c)) printf("right"); else printf("wrong");
	if(c<=b && b<=a || b<=c && c<=a) if(sqr(a)==sqr(b)+sqr(c)) printf("right"); else printf("wrong");
	printf("\n");
	}
	return 0;
}