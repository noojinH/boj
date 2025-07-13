#include<iostream>
#include<algorithm>
using namespace std;
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N; cin >> N;
    float *s = new float[N];
    for(int i=0;i<N;++i) cin >> s[i];
    sort(s, s+N);
    cout.precision(3);
    for(int i=0;i<7;++i) cout << fixed << s[i] << '\n';
    return 0;
}