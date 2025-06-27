#include<iostream>
#define len 1'000'001
using namespace std;
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    char *wrd = new char[len]{0};
    cin >> wrd;
    int ea[26] = {0};
    for(int i=0;i<len;++i){
        for(int j=0;j<26;++j){
            if(wrd[i] == 'A' + j || wrd[i] == 'a' + j){
                ++ea[j];
                break;
            }
        }
    }
    int max=0, m_ea=0, m_ptr = 0;
    for(int i=0;i<26;++i){
        if(ea[i] > max) {
            max=ea[i];
            m_ea=1;
            m_ptr = i;
        }
        else if(ea[i] == max) ++m_ea;
    }
    if(m_ea>1) cout << "?";
    else{
        char rsl = 'A' + m_ptr;
        cout << rsl;
    }
    cout << '\n';
    return 0;
}