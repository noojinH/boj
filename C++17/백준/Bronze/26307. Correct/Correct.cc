#include <iostream>
using namespace std;

int main(void){
    int HH, MM;
    cin >> HH >> MM;
    cout << (HH-9)*60+MM << '\n';
    return 0;
}