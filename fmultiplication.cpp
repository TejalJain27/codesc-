#include <iostream>
using namespace std;
int mul(int a,int b){
    return a*b; 
    }
    int main(){
        int a,b,c;
        cout<<"Enter num:";
        cin>>a>>b;
        c=mul(a,b);
        cout<<"multiplcation is:"<<c;
    }