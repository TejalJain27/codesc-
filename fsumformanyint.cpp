#include <iostream>
#include <cstdarg>  //need to use va_start and va_end
using namespace std; //default argument is when computer takes value from the parameter at priority (in comparison to taking value from argument)
int sum(int count, ...){ //parameter
    va_list args;
    va_start(args,count); //function ke andr function for n number of sum
    int total=0;
    for(int i=0;i<count;i++){
        total+= va_arg(args, int);}
    va_end(args);
    return total; 
    } 
    int main(){
        int e;
        e=sum(4,3,4,5,5); //function calling //argument
        cout<<"sum is:"<<e<<endl;
        return 0;
    }