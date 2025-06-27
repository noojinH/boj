#include<iostream>
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char S[101] = {0};
    cin >> S;
    char ptr = 0;
    for(char j=0;j<26;++j){
        short i;
        for(i=0;i<101;++i){
            if(S[i] == 'a'+j){
                cout << i;
                break;}
        }
        if(i==101) cout << "-1";
        if(j!=25) cout << ' ';
    }
    cout << '\n';
    return 0;
}