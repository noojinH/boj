#include<iostream>
using namespace std;
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int p,q;
    while(1){
        cin >> p >> q;
        if(p==q && q==0) break;
        if(p>q) cout << "Yes" << '\n';
        else cout << "No" << '\n';
    }
    return 0;
}