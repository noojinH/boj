#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    int N, t=0;
    cin >> N;
    vector<int> A(N);
    for(int i=0;i<N;++i) cin >> A[i];
    int M, B;
    cin >> M;
    for(int i=0;i<M;++i) 
    {
        cin >> B;
        t += A[B-1];
    }
    cout << t << '\n';
    return 0;
}