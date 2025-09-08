#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::getline;
using std::string;
using std::ios_base;

int main(void)
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        string ln;
        int l, u, n, s;
        while(getline(cin, ln)){
                l=u=n=s=0;
                for(int i=0;i<ln.size();++i){
                        char &c = ln[i];
                        if('a'<=c && c<='z') ++l;
                        else if('A'<=c && c<='Z') ++u;
                        else if('0'<=c && c<='9') ++n;
                        else ++s;
                }
                cout<<l<<' '<<u<<' '<<n<<' '<<s<<'\n';
        }
        return 0;
}