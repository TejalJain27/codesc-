#include <iostream>
#include <string>
using namespace std;
int main() {
    string fullName;
    int age;
    cout << "Enter your full name: ";
    getline(cin, fullName); 
    cout << "Enter your age: ";
    cin >> age;
    int daysAlive = age * 365; 
    cout << "Hello " << fullName << ", you are " << age << " years old!" << endl;
    cout << "You have been alive for approximately " << daysAlive << " days." << endl;

    return 0;
}
