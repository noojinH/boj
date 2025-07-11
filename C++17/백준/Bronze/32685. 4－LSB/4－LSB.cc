#include<iostream>
using namespace std;
static inline int ext(int a){
    int rsl;
    rsl = a & 15;
    return rsl;
}

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c;
    cin >> a >> b >> c;
    int stk = (ext(a) << 8) + (ext(b) << 4) + ext(c);
    if(stk>999) cout << stk << '\n';
    else if(stk>99) cout << '0' << stk << '\n';
    else if(stk>9) cout << "00" << stk << '\n';
    else cout << "000" << stk << '\n';
    return 0;
}