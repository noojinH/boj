#include<iostream>
using namespace std;
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, n=1, j=0;
    cin >> N;
    if(N==1) {cout << "1\n"; return 0;}
    while(n != N){
        int i;
        for(i = n; i < n+6*j;++i){
            if(i==N) break;
        }
        n = i;
        ++j;
    }
    cout << j << '\n';
    return 0;
}