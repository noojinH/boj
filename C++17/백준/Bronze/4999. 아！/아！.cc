#include<iostream>
using namespace std;
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string j, d;
    cin >> j >> d;
    if(j.size()>=d.size()) cout << "go" << '\n';
    else cout << "no" << '\n';
    return 0;
}