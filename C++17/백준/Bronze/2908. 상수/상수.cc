#include<iostream>
using namespace std;
void swap(char *p){
    char tmp = p[0];
    p[0] = p[2];
    p[2] = tmp;
    return;
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int A, B;
    cin >> A >> B;
    char a[4] =  {0}, b[4] = {0};
    sprintf(a, "%d", A); sprintf(b, "%d", B);
    swap(a); A = atoi(a);
    swap(b); B = atoi(b);
    cout << max(A,B) << '\n';
    return 0;
}