#include <stdio.h>

int main(void){
	int A,B,C,h,m=0;
	scanf("%d %d", &A, &B);
	scanf("%d", &C);
	h = C / 60;
	m = C % 60;
	A += h;
	if(B + m <= 59){
	B += m;
	}
	else{
		A++;
		B += m - 60;
	}
	if(A > 23)
		A -= 24;
	printf("%d %d", A, B);
	return 0;
}