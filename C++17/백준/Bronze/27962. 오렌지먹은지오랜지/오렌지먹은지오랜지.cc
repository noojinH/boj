#include<iostream>
using namespace std;
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N; cin >> N;
    char *p = new char[N+1];
    cin >> p; int rsl, i;
    for(i=1;i<=N;++i){
        rsl = 0;
        for(int j=0;j<i;++j)
            if(p[j] != p[N-i+j]) ++rsl;
        if(rsl==1) {cout << "YES" << '\n'; break;}
    }
    if(i>N) cout << "NO" << '\n';
    return 0;
}