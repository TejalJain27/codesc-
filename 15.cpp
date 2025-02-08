#include <iostream>
#include <math.h>
   using namespace std;
    int main(){
    int a,b,c,d,e,f,g,h;
    int count = 0;
    cout << "Enter the value of a:" <<endl;
    cin>> a;
    cout << "Enter the value of b:" <<endl;
    cin>> b;
    cout << "Enter the value of c:" <<endl;
    cin>> c;
    cout << "Enter the value of d:" <<endl;
    cin>> d;
    e=a^b+c&d;
    f=c&d;
    g=b+f;
    h=a^g;
    cout<<"Operations peformed:a^b+c&d"<<endl;
    cout<<"Precedence order is: ~x -> x & y -> ^ ->"<<"\n1st:c&d="<<f<< "\n2nd:b+(c&d)="<<g<<"\n3rd:a^(b+(c&d))="<<h<<"\n Therefore the output is:"<<e<<endl;
    return 0;
    }