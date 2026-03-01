#include <iostream>
#include <vector>
using namespace std;

int main(void){
    int T,n;
    vector<int> dp(12);
    dp[1]=1; dp[2]=2; dp[3]=4;
    cin>>T;
    for(int i=4;i<12;++i){
        dp[i]=dp[i-3]+dp[i-2]+dp[i-1];
    }
    for(int i=0;i<T;++i){
        cin>>n;
        if(n<4) cout<<dp[n]<<'\n';
        else cout<<dp[n-3]+dp[n-2]+dp[n-1]<<'\n';
    }
    return 0;
}