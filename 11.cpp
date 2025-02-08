#include <iostream>
   using namespace std;
    int main(){
    int a,n;
    int count = 0;
    cout << "Enter an integer" <<endl;
    cin>> a;
    while (n) {
        count += (n & 1);
        n >>= 1;
    }
    cout << "The number of bits in the binary representation of " 
         << a << " is: " << count << endl;
    return 0;
}