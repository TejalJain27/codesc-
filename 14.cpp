#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cout << "Enter the lengths of the three sides of the triangle: ";
    cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a) {
        cout << "The sides form a valid triangle" << endl;
        if (a == b && b == c) {
            cout << "It is an equilateral triangle" << endl;
        } else if (a == b || b == c || a == c) {
            cout << "It is an isosceles triangle" << endl;
        } else {
            cout << "It is a scalene triangle" << endl;
        }
    } else {
        cout << "The sides do not form a valid triangle"<< endl;
    }
    return 0;
}
