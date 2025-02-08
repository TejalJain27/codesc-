   #include <iostream>
   using namespace std;
    int main(){
    float a,b;
    char ch;
    cout << "Enter 1st num:" <<endl;
    cin>> a;
    cout << "Enter 2nd num:" <<endl;
    cin>> b;
    cout << "Enter mathematical operator:" <<endl;
    cin>>ch;
    switch (ch)
    {
    case '+':
        cout <<a+b<<endl;
        break;
    case '-':
        cout <<a-b<<endl;
        break;
    case '*':
        cout <<a*b<<endl;
        break;
    case '/':
        if (b != 0) {
            cout<< a / b << endl;
        } else {
            cout << "Error: Division by zero" << endl;
        }
        break;

    default:
        cout<<"Error"<<endl;
        break;
    }
    return 0;
}