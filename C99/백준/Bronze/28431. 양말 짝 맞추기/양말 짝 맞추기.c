#include <stdio.h>

int main(void){
	int num[5], tog[5] = {0}, pair=0;
	int smp, k=0;
	for(int i=0;i<5;++i)
		scanf("%d", &num[i]);
	while(pair<2){
	smp = num[k];
	int i=k;
	if(tog[i]==0){
	while(i<4){
		i++;
		if(smp == num[i]){
			pair++;
			tog[k] = 1;
			tog[i] = 1;
			break;
		}
	}
	}
	k++;
	}
	for(int i=0;i<5;++i){
		if(tog[i] == 0)
			printf("%d\n", num[i]);
		}
	return 0;
}