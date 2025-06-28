#include<iostream>
#include<string>
using namespace std;
typedef struct{
    string nc;
    string cht;
} bnd;
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, ptr, rsl=0;
    string nm, crt;
    cin >> N >> nm;
    bnd b0[N];
    for(int i=0;i<N;++i){
        cin >> b0[i].nc >> b0[i].cht;
        if(!(b0[i].nc.compare(nm))) {ptr = i;
            crt = b0[i].cht;
        }
    }
    for(int i=0;i<ptr;++i){
        if(!(b0[i].cht.compare(crt))) ++rsl;
    }
    cout << rsl << '\n';
    return 0;
}