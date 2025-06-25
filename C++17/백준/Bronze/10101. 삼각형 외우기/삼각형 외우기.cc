#include<cstdio>
int main(void){
    unsigned char y,u,i;
    scanf("%hhu%hhu%hhu", &y, &u, &i);
    if(y + u + i != 180) printf("Error\n");
    else if(y == u && u == i)
        printf("Equilateral\n");
    else if(y == u || u == i || y == i)
        printf("Isosceles\n");
    else printf("Scalene\n");
    return 0;
}