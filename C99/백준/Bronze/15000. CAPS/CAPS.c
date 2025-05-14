#include <stdio.h>

int main(void) {
    char st[10*10*10*10*10*10 + 1] = {0};
    int i=0;
    scanf("%s", st);
    while (st[i] != 0) {
        printf("%c", st[i] - 32);
        i++;
    }
    printf("\n");
    return 0;
}