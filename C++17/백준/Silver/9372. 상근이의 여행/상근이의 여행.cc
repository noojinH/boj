#include <iostream>
using namespace std;

int main(void)
{
    int T;
    cin >> T;
    int N; int M;
    int _;
    for(int j=0;j<T;++j){
        cin >> N >> M;
        for(int i=0;i<M;++i){
            cin >> _ >> _;
        }
        cout << N-1 <<'\n';
    }
    return 0;
}