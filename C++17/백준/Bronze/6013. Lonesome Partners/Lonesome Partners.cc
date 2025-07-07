#include<iostream>
#include<cmath>
using namespace std;
typedef struct{
    short x;
    short y;
} pos;
static inline int dsnf(pos p0, pos p1){
    return sqrt(pow(p1.x - p0.x, 2) + pow(p1.y - p0.y, 2));
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N; cin >> N;
    pos *co = new pos[N];
    for(int i=0;i<N;++i){
        cin >> co[i].x;
        cin >> co[i].y;
    }
    int mx=0, dsn, st0, st1;
    for(int i=0;i<N-1;++i){
        for(int j=i+1;j<N;++j){
            dsn = dsnf(co[i], co[j]);
            if(dsn > mx){ mx = dsn;
                st0 = i+1; st1 = j+1;
            }
        }
    }
    cout << st0 << ' ' << st1 << '\n';
    return 0;
}