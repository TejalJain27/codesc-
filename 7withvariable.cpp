   #include <iostream>
   using namespace std;
    int main(){
    int a,b,c;
    cout << "Enter 1st num:" <<endl;
    cin>> a;
    cout << "Enter 2nd num:" <<endl;
    cin>> b;
    cout << "Unswapped num:"<< a<<b<<endl;
    c=a;
    a=b;
    b=c;
    cout << "Swapped num:"<< a<<b<<endl;
    return 0;
}