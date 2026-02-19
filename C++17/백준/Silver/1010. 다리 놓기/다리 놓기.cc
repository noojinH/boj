#include <iostream>
#include <vector>
using namespace std;
using ull=unsigned long long;

int main(void)
{
    int T;
    int n; int m;
    cin >> T;
    for(int i=0;i<T;++i){
        cin >> n >> m;
        vector<vector<ull>> pca(m+1, vector<ull>(n+1,0));
        for(int i=0;i<=m;++i){
            pca[i][0]=1;
            for(int j=1;j<=i && j<=n;++j){
                if(i==j) pca[i][j]=1;
                else pca[i][j]=pca[i-1][j-1]+pca[i-1][j];
            }
        }
        cout<<pca[m][n]<<'\n';
    }
    return 0;
}