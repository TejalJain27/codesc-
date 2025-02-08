#include <iostream>
   using namespace std;
    int main(){
    int a,b;
    cout << "Enter 1st num:" <<endl;
    cin>> a;
    cout << "Enter 2nd num:" <<endl;
    cin>> b;
    if (a%b==0)
    {
        cout <<a <<"is a multiple of"<< b<<endl;
    } 
    else {
            cout << a <<"is not a multiple of"<< b << endl;
    }
    return 0;
}