#include <iostream>
using namespace std;

int main(void)
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int N,M,K;
        cin >> N >> M >> K;
        cout<<M/N*K<<'\n';
        return 0;
}