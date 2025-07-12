#include<iostream>
using namespace std;
int gcd(int a, int b){
    if(a<b) {int tmp = a; a=b; b=tmp;}
    if(b==0) return a;
    return gcd(b, a%b);
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,a,b,rsl;
    cin >> n;
    for(int i=0;i<n;++i){
        cin >> a >> b;
        rsl = gcd(a,b);
        cout << (long long)a*b/rsl << '\n';
    }
    return 0;
}