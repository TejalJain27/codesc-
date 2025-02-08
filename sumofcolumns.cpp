#include <iostream>
using namespace std;
int main(){
    int arr[3][3],i,j;
    cout<<"provide elements:";
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                cin>>arr[j][i];
                }
        }
    cout<<"ARRAY LOOKS LIKE"<<endl;
    for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                cout<<"\t"<<arr[i][j];}
        cout<<endl;
    }
    cout << "Sum of each column:\n";
    for (int j = 0; j <3; j++) {
        int sum = 0;
        for (int i = 0; i < 3; i++) {
            sum += arr[i][j];
        }
        cout << "column " << j + 1 << ": " << sum << endl;
    }
    return 0;
    }