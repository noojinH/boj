#include<iostream>
using namespace std;

int main(void){
    int N;
    cin >> N;
    int x; int prv;
    cin >> prv;
    int icrl=1; int dcrl=1;
    int maxl=1;
    for(int i=0;i<N-1;++i){
        cin>>x;
        if(x==prv){
            ++icrl;
            ++dcrl;
            if(icrl>maxl) maxl=icrl;
            if(dcrl>maxl) maxl=dcrl;
        }
        else if(x>prv){
                ++icrl;
                dcrl=1;
                if(icrl>maxl) maxl=icrl;
            }
        else{
            icrl=1;
            ++dcrl;
            if(dcrl>maxl) maxl=dcrl;
        }
        prv=x;
    }
    cout<<maxl<<'\n';
    return 0;
}