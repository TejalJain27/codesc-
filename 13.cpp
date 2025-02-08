 #include <iostream>
   using namespace std;
    int main(){
    float a,b,c,d;
    int ch;
    cout<<"Account limit is: 50000 INR"<<endl;
    cout << "Enter balance:" <<endl;
    cin>> a;
    if (a>10000){
        cout<<"Sufficient balance!!"<<endl;}
    else{
        cout<<"Insufficient balance"<<endl;
    }
    b=a-10000;
    cout << "Enter choice \n 1(for withdrawal): \n 2(for deposit):\n 3(for inquiry): \n 4(to exit):" <<endl;
    cin>>ch;
    switch (ch){
        case 1:cout <<"enter Withdrawal amount:"<<endl;
            cin>>c;
            if(b>c){
              cout <<"Withdrawal in process"<<endl;  
            }
            else{
                cout <<"Withdrawal can't be processed"<<endl; 
            }
            break;
        case 2:
            cout <<"Enter amount to Deposit:"<<endl;
            cin>>d;
            if(d>0 && a+d<50000){
                cout<<d<<"rupees deposited"<<endl;}
            if(d>0 && a+d>50000){
                cout<<"Account limit reached ,You can add amount upto"<<50000-a<<endl;}
            if(d==0){
                cout<<"Try again,deposition unsuccessful"<<endl;}
            break;
        case 3:
            cout <<"Inquiry"<<endl;
            break;
        case 4:
            cout<< "Exiting.." << endl;
            break;
        default:
        cout<<"enter a valid choice"<<endl;}
    return 0;
}