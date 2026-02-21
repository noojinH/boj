#include <iostream>
using namespace std;

int main(void)
{
    int a,b,c;
    cin >> a >> b >> c;
    for(int x=1;x<11;++x){
        bool exs=0;
        for(int y=1;y<11;++y){
            if(a * x + b * y == c){
                cout << y << ' ';
                exs=1;
            }
        }
        if(!exs) cout<< 0;
        cout << '\n';
    }
    return 0;
}