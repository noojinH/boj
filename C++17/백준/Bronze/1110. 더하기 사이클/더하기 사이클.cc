#include<bits/stdc++.h>
using namespace std;
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x, sum;
    cin >> x;
    int init = x, at=0;
    do{
        if(x<10) sum = x;
        else sum = x/10 + x%10;
        x = x%10*10 + sum%10;
        ++at;
    }while(init != x);
    cout << at << '\n';
    return 0;
}