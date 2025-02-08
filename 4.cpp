   #include <iostream>
   using namespace std;
    int main(){
    float a,b;
    cout << "Enter 1st num:" <<endl;
    cin>> a;
    cout << "Enter 2nd num:" <<endl;
    cin>> b;
    if (b != 0) {
            cout<< "RESULT:"<<a / b << endl;
        } else {
            cout << "Error: Division by zero" << endl;
        }
    return 0;
}