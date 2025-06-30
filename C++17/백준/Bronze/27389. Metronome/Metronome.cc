#include<iostream>
using namespace std;
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    cout << fixed;
    cout.precision(2);
    cout << n / 4.0 << '\n';
    return 0;
}