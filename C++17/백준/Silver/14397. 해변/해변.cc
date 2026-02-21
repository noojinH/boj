#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void)
{
    int N, M;
    int cnt=0;
    cin >> N >> M;
    vector<string> G(N);
    for(int i=0;i<N;++i){
        cin >> G[i];
    }
    for(int i=0;i<N;++i){
        for(int j=0;j<M;++j){
            if(G[i][j] == '#'){
                if(i%2){
                    if(i>0 && G[i-1][j] == '.') ++cnt;
                    if(i>0 && j<M-1 && G[i-1][j+1] == '.') ++cnt;
                    if(j>0 && G[i][j-1] == '.') ++cnt;
                    if(j<M-1 && G[i][j+1] == '.') ++cnt;
                    if(i<N-1 && G[i+1][j] == '.') ++cnt;
                    if(i<N-1 && j<M-1 && G[i+1][j+1] == '.') ++cnt;
                }else{
                    if(i>0 && j>0 && G[i-1][j-1] == '.') ++cnt;
                    if(i>0 && G[i-1][j] == '.') ++cnt;
                    if(j>0 && G[i][j-1] == '.') ++cnt;
                    if(j<M-1 && G[i][j+1] == '.') ++cnt;
                    if(i<N-1 && j>0 && G[i+1][j-1] == '.') ++cnt;
                    if(i<N-1 && G[i+1][j] == '.') ++cnt;
                }
            }
        }
    }
    cout<< cnt << '\n';
    return 0;
}