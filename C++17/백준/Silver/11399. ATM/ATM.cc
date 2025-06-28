#include<bits/stdc++.h>
using namespace std;
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    int * p = new int[N];
    for(int i=0;i<N;++i) cin >> p[i];
    sort(p, p+N);
    int sum=0;
    for(int i=0;i<N;++i){
        static int el;
        el += p[i];
        sum += el;
    }
    cout << sum << '\n';
    return 0;
}