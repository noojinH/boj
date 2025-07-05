#include<iostream>
using namespace std;
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, i, rsl=0; cin >> N;
    int *a = new int[N], *b = new int[N];
    for(i=0;i<N;++i) cin >> a[i];
    for(i=0;i<N;++i) cin >> b[i];
    for(i=0;i<N;++i){
        if(a[i] > b[i])
            rsl+=a[i]-b[i];
    }
    cout << rsl << '\n';
    return 0;
}