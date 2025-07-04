#include<iostream>
#include<algorithm>
using namespace std;
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    int *tm = new int[N];
    for(int i=0;i<N;++i){
        int A,B;
        cin >> A >> B;
        if(B - A < 0) tm[i] = 1001;
        else tm[i] = B;
    }
    if(*min_element(tm,tm+N) ==1001)
        cout << -1;
    else
        cout << *min_element(tm, tm+N);
    cout << '\n';
    return 0;
}