#include <iostream>
#include <string>
using namespace std;
int main() {
    string xx;
    int y;
    float x;
    cout << "Enter string: ";
    getline(cin, xx);
    cout << "Input integer" << endl;
    cin>> y;
    cout << "Input float value" << endl;
    cin>>x;
    cout << "|String |" << xx<<"|"<<endl;
    cout << "|Integer|" << y<<"|"<<endl;
    cout << "|Float  |" << x<<"|"<<endl;
    return 0;
}