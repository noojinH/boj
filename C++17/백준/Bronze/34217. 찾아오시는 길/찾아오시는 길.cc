#include <iostream>
using namespace std;

int main(void)
{
    int A,B,C,D;
    cin>>A>>B>>C>>D;
    if(A+C==B+D) cout<<"Either\n";
    else if(A+C>B+D) cout<<"Yongdap\n";
    else cout<<"Hanyang Univ.\n";
    return 0;
}