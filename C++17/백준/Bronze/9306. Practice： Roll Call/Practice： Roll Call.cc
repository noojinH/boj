#include<iostream>
using namespace std;
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    char *n = new char[21]{0};
    char *l = new char[21]{0};
    for(int i=1;i<=N;++i){
        cin >> n >> l;
        cout << "Case " << i << ": " << l << ", " << n;
        cout << '\n';
    }
    return 0;
}