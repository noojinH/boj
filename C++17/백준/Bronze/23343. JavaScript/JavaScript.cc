#include<iostream>
#include<string>
using namespace std;
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string x,y;
    bool NaN = 0;
    cin >> x >> y;
    for(int i=0;i<x.size();++i) if(!isdigit(x[i])) NaN=true;        
    for(int i=0;i<y.size();++i) if(!isdigit(y[i])) NaN=true;        
    if(NaN) cout << "NaN" << '\n';
    else cout << stoi(x) - stoi(y) << '\n';
    return 0;
}