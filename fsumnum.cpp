#include <iostream>
using namespace std;
int sum(int a,int b){
    return a+b; 
    }
    int main(){
        int a,b,c;
        cout<<"Enter num:";
        cin>>a>>b;
        c=sum(a,b);
        cout<<"sum is:"<<c;
    }