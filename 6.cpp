#include <iostream>
   using namespace std;
    int main(){
    float l,w,p;
    cout << "Enter Length in cm:" <<endl;
    cin>> l;
    cout << "Enter Width in cm:" <<endl;
    cin>> w;
    p=2*(l+w);
    if (l >= 0 && w>=0) {
            cout<< "Area:"<<l*w <<"meter square"<< endl;
            cout<< "Perimeter:"<<p <<"cm"<< endl;
        } else {
            cout << "Input suitable dimensions" << endl;
        }
    return 0;
}