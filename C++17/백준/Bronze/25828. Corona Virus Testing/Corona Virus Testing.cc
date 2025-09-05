#include <iostream>
using namespace std;

int main(void)
{
        int g, p, t;
        cin >> g >> p >> t;
        if(g + p * t > g * p) cout << 1<<'\n';
        else if(g + p * t < g * p) cout << 2<<'\n';
        else cout << 0<<'\n';
        return 0;
}