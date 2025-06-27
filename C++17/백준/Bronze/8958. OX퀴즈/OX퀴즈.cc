#include<iostream>
using namespace std;
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    for(int i=0;i<N;++i){
        char *p = new char[81]{0};
        cin >> p;
        int streak = 0, scr=0;
        for(int j=0;j<81;++j){
            if(p[j] == 0) break;
            else if(p[j] == 'O') scr+=++streak;
            else streak = 0;
        }
        cout << scr << '\n';
        delete[] p;
    }
    return 0;
}