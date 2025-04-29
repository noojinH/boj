#include <stdio.h>

int _pow(int z0, int z1){
	int rsl=1;
	for(int i=0;i<z1;++i){
		rsl *= z0;
	}
	return rsl;
}

int main(void){
	int N, M,plc,cnt=0;
	scanf("%d %d", &N, &M);
	if(N/1000.0>=1) plc=4;
	else if(N/100.0>=1) plc=3;
	else if(N/10.0>=1) plc=2;
	else plc=1;
	//printf("%d\n", plc);
	for(int i =0;i<N;++i){
		cnt += plc;
		if(cnt<=M){
		printf("%d", N);
		//printf(" %d\n", cnt);
		if(cnt==M) break;
		}
		else {
			//printf("%d\n", i);
			//printf("%d\n", cnt-M);
			//printf("%d", N);
			//printf("%d", M-plc*i);
			N /= _pow(10,plc - (M-plc*i));
			if(N!=0) printf("%d", N);
			break;
		}
	}
	printf("\n");
	return 0;
}