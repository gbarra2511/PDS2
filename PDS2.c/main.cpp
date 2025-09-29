#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main(){
    cout << "Hello Student whats your name?";
    string a;
    cin >> a;
    cout << "Hello " << a << endl;

    string string;
    getline(cin,string);
    ofstream out("string.txt", fstream::out);

    return 0;
}