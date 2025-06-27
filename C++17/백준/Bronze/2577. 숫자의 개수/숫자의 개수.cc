#include<iostream>
using namespace std;
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int A,B,C;
    long long rsl;
    char _rsl[11] = {0};
    int ea[10] = {0};
    cin >> A >> B >> C;
    rsl = (long long)A * B * C;
    sprintf(_rsl, "%lld", rsl);
    for(int j=0;j<11;++j){
        if(_rsl[j] == 0) break;
        for(int i='0'; i<='9'; ++i){
            if(_rsl[j] == i) ++ea[i - '0'];
        }
    }
    for(int i=0;i<10;++i)
        cout << ea[i] << '\n';
    return 0;
}