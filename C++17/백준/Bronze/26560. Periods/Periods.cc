#include<iostream>
#include<cstring>
using namespace std;
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n; cin.get();
    while(n--){
        char *stn = new char[128]{0};
        cin.getline(stn, 128);
        if(stn[strlen(stn) - 1] != '.'){
            cout << stn << ".\n";
        }
        else cout << stn << '\n';
    }
    return 0;
}