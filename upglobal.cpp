#include <iostream>
using namespace std;
int x = 20;  // Global variable
int update() {
    x++;  // Increment global x
    return x;  // Return updated x
}

int main() {
    int y;
    y = update();
    cout << y << endl;  // Prints 21

    y = update();
    cout << y;  // Prints 22

    return 0;
}
