#include <iostream>
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int l,a,b,c,d;
    cin>>l>>a>>b>>c>>d;
    int div1,div2;
    div1 = a%c?a/c+1:a/c;
    div2 = b%d?b/d+1:b/d;
    cout<<(div1>div2?l-div1:l-div2)<<'\n';
    return 0;
}