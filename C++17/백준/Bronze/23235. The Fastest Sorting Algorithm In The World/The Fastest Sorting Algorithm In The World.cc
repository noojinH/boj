#include <iostream>
#include <string>
using namespace std;

int main(void)
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int cse=0;
        string col;
        while(1){
                getline(cin, col);
                if(col == "0") break;
                ++cse;
                cout<<"Case "<<cse<<": Sorting... done!\n";
        }
        return 0;
}