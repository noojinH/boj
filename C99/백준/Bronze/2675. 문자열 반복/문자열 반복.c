#include <stdio.h>

int main(void){
	unsigned T,R,cnt=0;
	char S[21], P[161];
	for(register int i=0;i<21;++i)S[i]='~';
	scanf("%u", &T);
	for(int i =0; i<T;++i){
        cnt=0;
		scanf("%u %s",&R,S);
		for(register int k=0;k<21;++k)
			if(S[k] != '~')cnt++;
		for(int j=0;j<cnt;++j){
			for(register int k=0;k<R;++k)P[j*R+k]=S[j];
		}
        printf("%s",P);
		printf("\n");
	}
	return 0;
}