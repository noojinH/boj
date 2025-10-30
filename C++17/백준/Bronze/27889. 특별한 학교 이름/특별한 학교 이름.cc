#include <iostream>
#include <cstring>
using namespace std;

int main(void){
    char* in = new char[5];
    strcpy(in, " ");
    char** list = new char*[4];
    for(int i=0;i<4;++i){
        list[i] = new char[5];
    }
    strcpy(list[0],"NLCS");
    strcpy(list[1], "BHA");
    strcpy(list[2], "KIS");
    strcpy(list[3], "SJA");
    cin >> in;
    if(!strcmp(in, list[0])) cout << "North London Collegiate School" << endl;
    if(!strcmp(in, list[1])) cout << "Branksome Hall Asia" << endl;
    if(!strcmp(in, list[2])) cout << "Korea International School" << endl;
    if(!strcmp(in, list[3])) cout << "St. Johnsbury Academy" << endl;
    return 0;
}