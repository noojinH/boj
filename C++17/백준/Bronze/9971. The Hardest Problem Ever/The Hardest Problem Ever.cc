#include<iostream>
using namespace std;
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string C;
    string P = "VWXYZABCDEFGHIJKLMNOPQRSTU";
    while(1){
        getline(cin, C);
        if(!C.compare("ENDOFINPUT")) break;
        if(C.compare("START") && C.compare("END")){
            for(int i=0;i<C.size();++i){
                if(isalpha(C[i]))
                    cout << P[C[i] - 'A'];
                else cout << C[i];
            }
            cout << '\n';
        }
    }
    return 0;
}