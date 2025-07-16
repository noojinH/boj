#include<iostream>
#include<cmath>
using namespace std;
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c, rsl;
    cin >> a >> b >> c;
    if(c==0) rsl = sqrt(a+b);
    else if(a==0) rsl = pow(c,2) - b;
    else rsl = pow(c,2) - a;
    cout << rsl << '\n';
    return 0;
}