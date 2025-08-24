#include<iostream>
using namespace std;

int main(void){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int ea, num;
    cin >> ea;
    for(int i=0;i<ea;++i){
        cin >> num;
        cout << num << ' ' << num << '\n';
    }
    return 0;
}