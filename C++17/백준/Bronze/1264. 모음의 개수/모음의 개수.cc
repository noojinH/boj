#include<iostream>
#include<cstring>
using namespace std;
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    char *p = new char[256]{0};
    char v[5] = {'a','e','i','o','u'};
    do{
    int cnt = 0;
    cin.getline(p,256);
    for(int i=0;i<strlen(p);++i){
        for(int j=0;j<5;++j){
            if(p[i] == v[j]-32 || p[i] == v[j]){
                ++cnt;
                break;
            }
        }
    }
    if(strcmp(p, "#")) cout << cnt << '\n';
    }while(strcmp(p, "#"));
    return 0;
}