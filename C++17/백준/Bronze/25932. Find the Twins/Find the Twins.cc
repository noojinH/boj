#include <iostream>
using namespace std;

int main(void)
{
    int n, t;
    bool z=0, m=0;
    cin>>n;
    for(int i=0;i<n;++i)
    {
        z=0; m=0;
        for(int j=0;j<10;++j)
        {
            cin>>t;
            cout<<t;
            if(j==9) cout<<'\n';
            else cout<<' ';
            if(t==17) z=1;
            if(t==18) m=1; 
        }
        if(z && m) cout<<"both\n";
        else if(z) cout<<"zack\n";
        else if(m) cout<<"mack\n";
        else cout<<"none\n";
        if(i!=n-1) cout<<'\n';
    }
    return 0;
}