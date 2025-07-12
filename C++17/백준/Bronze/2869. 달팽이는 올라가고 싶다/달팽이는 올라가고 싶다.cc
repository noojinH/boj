#include<iostream>
#include<cmath>
using namespace std;
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int A,B; double V;
    cin >> A >> B >> V;
    cout << (int)(ceil((V-A)/(A-B)) + 1) << '\n';
    return 0;
}