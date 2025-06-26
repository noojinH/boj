#include<iostream>
using namespace std;
int main(void){
    int x,y,w,h;
    cin >> x >> y >> w >> h;
    int difx, dify;
    difx = min(x, w - x);
    dify = min(y, h - y);
    cout << min(difx, dify) << '\n';
    return 0;
}