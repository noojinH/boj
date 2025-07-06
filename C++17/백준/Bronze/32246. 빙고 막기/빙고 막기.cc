#include<iostream>
using namespace std;
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    if(N==2) cout << 3 << '\n';
    else cout << N << '\n';
    return 0;
}