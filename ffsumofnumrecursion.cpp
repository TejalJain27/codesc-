#include <iostream>
using namespace std;
int sumNatural(int n){
    if (n==0) {
        return 0;
    }
    return n+sumNatural(n-1);
}
int main() {
    int n;
    cout << "Enter the number: ";
    cin>>n;
    int c=sumNatural(n);
    cout << "Sum of first " <<n<< " numbers is: " << c << endl;
    return 0;
}
