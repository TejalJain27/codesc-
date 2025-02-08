   #include <iostream>
   #include <cmath>
   using namespace std;
    int main(){
    float p,r,t,n,ci,s,x,z;
    cout << "Enter Principle Amount:" <<endl;
    cin >> p;
    cout << "Rate of interest" << endl;
    cin>> r;
    cout << "Time period" << endl;
    cin>> t;
    cout << "No. of times interest is compunded" << endl;
    cin>> n;
    s=1+(r/n);
    z=n/t;
    x=pow(s,z);
    ci=(p*x)-p;
    cout << "Compund interest is:"<< ci << endl;
    return 0;
}
