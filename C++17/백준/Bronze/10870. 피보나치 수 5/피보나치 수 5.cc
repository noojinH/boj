#include<iostream>
using namespace std;
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int f0 = 0, f1 = 1, rsl;
    int n;
    cin >> n;
    if(n==0) {cout << "0\n"; exit(0);}
    else if(n==1) {cout << "1\n"; exit(0);}
    for(int i=2;i<=n;++i){
        rsl = f0 + f1;
        f0 = f1;
        f1 = rsl;
    }
    cout << f1 << '\n';
    return 0;
}