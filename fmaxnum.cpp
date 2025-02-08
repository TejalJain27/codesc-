#include <iostream>
using namespace std;
int maxnum(int a,int b){
    int maxnuum=0;
    if(a>b){
        cout<<"Max num:"<<a;
        maxnuum=a;
    }
    else{
        cout<<"Max num:"<<b;
        maxnuum=b;
    }
    return maxnuum; }

    int main(){
        int a,b,c;
        cout<<"Enter num";
        cin>>a>>b;
        c=maxnum(a,b);}



