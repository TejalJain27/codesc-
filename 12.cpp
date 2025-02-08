#include <iostream>
   using namespace std;
    int main(){
    int a,b,c,d;
    int count = 0;
    cout << "Enter the value of a in the quadratic equation:" <<endl;
    cin>> a;
    cout << "Enter the value of b in the quadratic equation:" <<endl;
    cin>> b;
    cout << "Enter the value of c in the quadratic equation:" <<endl;
    cin>> c;
    d=(b*b)-(4*a*c);
    cout << "The equation is representation as:"<<a<<"x^2"<<"+"<<b<<"x"<<"+"<<c<<endl;
    if(d>0){
        cout <<"The roots are real and distinct." << endl;
    }
    if(d<0){
        cout <<"The roots are complex conjugates." << endl;
    }
    if(d==0){
        cout <<"The roots are real and equal." << endl;
    }
    return 0;
}