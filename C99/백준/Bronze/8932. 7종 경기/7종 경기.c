#include<stdio.h>
#include<math.h>
int main(void){
    short T;
    scanf("%hd", &T);
    for(short i=0;i<T;i++){
        int sum=0;
        for(char j=0;j<7;j++){
            int P;
            scanf("%d", &P);
            switch(j){
                case 0: sum+=9.23076*pow(26.7-P, 1.835); break;
                case 1: sum+=1.84523*pow(P-75, 1.348); break;
                case 2: sum+=56.0211*pow(P-1.5, 1.05); break;
                case 3: sum+=4.99087*pow(42.5-P, 1.81); break;
                case 4: sum+=0.188807*pow(P-210, 1.41); break;
                case 5: sum+=15.9803*pow(P-3.8, 1.04); break;
                case 6: sum+=0.11193*pow(254-P, 1.88); break;
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}