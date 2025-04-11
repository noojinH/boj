#include <stdio.h>

int main(void){
	int s1,s2;
	scanf("%d %d", &s1, &s2);
	if(s1<s2/2.0) printf("H"); else printf("E");
	return 0;
}