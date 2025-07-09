#include<iostream>
using namespace std;
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, sum=0;
    cin >> n;
    for(int i=1;i<=n;++i)
        if(n % i == 0) sum+=i;
    cout << 5*sum-24 << '\n';
    return 0;
}