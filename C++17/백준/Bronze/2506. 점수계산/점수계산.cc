#include <iostream>
using namespace std;

int main(void)
{
    int N, t, s=0, rsl=0;
    cin>>N;
    for(int i=0;i<N;++i)
    {
        cin >> t;
        if(!t){
            s=0;
        }
        else{
            ++s;
            rsl+=s;
        }
    }
    cout << rsl << '\n';
    return 0;
}