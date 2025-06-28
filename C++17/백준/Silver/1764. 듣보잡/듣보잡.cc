#include<bits/stdc++.h>
using namespace std;
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, M;
    cin >> N >> M;
    set<string> p;
    string *r = new string[N];
    string *q = new string[M];
    for(int i=0;i<N;++i){
        string tmp;
        cin >> tmp;
        p.insert(tmp);
    }
    int rsl=0;
    for(int i=0;i<M;++i){
        cin >> q[i];
        if(p.find(q[i]) != p.end()) {
            r[rsl] = q[i]; ++rsl;
        }
    }
    sort(r, r+rsl);
    cout << rsl << '\n';
    for(int i=0;i<rsl;++i) cout << r[i] << '\n';
    return 0;
}