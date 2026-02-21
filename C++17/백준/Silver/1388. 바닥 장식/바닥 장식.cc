#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    int cnt=0;
    int N; int M;
    cin >> N >> M;
    vector<vector<char>> G(N, vector<char>(M,0));
    for(int i=0;i<N;++i){
        for(int j=0;j<M;++j){
            cin >> G[i][j];
            if(G[i][j] == '-' && j>0 && G[i][j-1] == '-'){}
            else if(G[i][j] == '|' && i>0 && G[i-1][j] == '|'){}
            else ++cnt;
        }
    }
    cout << cnt <<'\n';
    return 0;
}