#include<bits/stdc++.h>
using namespace std;
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string c; int M;
    cin >> M; int b=0;
    while(M--){
        cin >> c;
        int x;
        if(c == "add"){
            cin >> x;
            b |= 1 << x-1;
    }
        else if(c=="remove"){
            cin >> x;
            b &= ~(1 << x-1);
        }
        else if(c=="check"){
            cin >> x;
            cout << (b & 1 << x-1?1:0) << '\n';
        }
        else if(c=="toggle"){
            cin >> x;
            b ^= 1 << x-1;
        }
        else if(c=="all"){
            b = (1 << 20) - 1;
        }
        else if(c=="empty"){
            b = 0;
        }
    }
    return 0;
}