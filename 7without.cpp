   #include <iostream>
   using namespace std;
    int main(){
    int a,b;
    cout << "Enter 1st num:" <<endl;
    cin>> a;
    cout << "Enter 2nd num:" <<endl;
    cin>> b;
    cout << "Unswapped num:"<< a<<b<<endl;
    a= a + b;
    b= a - b;
    a= a - b;
    cout << "Swapped num:"<< a<<b<<endl;
    return 0;
}