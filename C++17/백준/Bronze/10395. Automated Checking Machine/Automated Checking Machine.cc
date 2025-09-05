#include <iostream>
using namespace std;

int main(void)
{
        bool x[10]; int i;
        for(i=0;i<10;++i){
                cin >> x[i];
        }
        for(i=0;i<5;++i){
                if(x[i]==x[5+i]) break;
        }
        if(i==5) cout << "Y\n";
        else cout << "N\n";
        return 0;
}