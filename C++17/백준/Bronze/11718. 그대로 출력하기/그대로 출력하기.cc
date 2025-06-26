#include<cstdio>
#include<cstring>
using namespace std;
int main(void){
    char * ex = new char[101]{0};
    char * ep = new char[101]{0};
    while(scanf("%[^\n]", ex) == 1){
        printf("%s\n", ex);
        strcpy(ex,ep);
        getchar();
    }
    return 0;
}