#include<iostream>
#define ll long long
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int Q;
    cin >> Q;
    ll a,b;
    for(int i=0;i<Q;++i){
        cin >> a >> b;
        if(b%a==0 && b/a>=2) cout << "1\n";
        else cout << "0\n";
    }
    return 0;
}