#include <iostream>
using namespace std;
//when function calls itself again nd again(twice or more)
// Recursive function to calculate factorial
int fact(int num){
    if (num == 0|| num == 1) {
        return 1;
    }
    else{
    return num * fact(num - 1); }// Recursive call with num-1
}
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Factorial of " << n << " is: " << fact(n) << endl;
    return 0;
}

