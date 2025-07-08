#include<iostream>
using namespace std;
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N,M,i;
    cin >> N >> M;
    int *y = new int[100]{0};
    int *l = new int[100]{0};
    int ii, j, spd, ptr=0;
    for(i=0;i<N;++i){
        cin >> ii >> spd;
        for(j=ptr;j<ptr+ii;++j) l[j] = spd;
        ptr+=ii;
    } ptr=0;
    for(i=0;i<M;++i){
        cin >> ii >> spd;
        for(j=ptr;j<ptr+ii;++j) y[j] = spd;
        ptr+=ii;
    }
    int rsl=0;
    for(i=0;i<100;++i){
        if(y[i] > l[i]){
            rsl = max(rsl, y[i] - l[i]);
        }
    }
    cout << rsl << '\n';
    return 0;
}