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
    cout << "Sum of each row:\n";
    for (int i = 0; i < 3; i++) {
        int sum = 0;
        for (int j = 0; j <3; j++) {
            sum += arr[i][j];
        }
        cout << "Row " << i + 1 << ": " << sum << endl;
    }
    cout << "Max Sum:\n";
    for (int i = 0; i < 3; i++) {
        int sum = 0;
        int maxsum=0;
        for (int j = 0; j <3; j++) {
            sum += arr[i][j];
            if (sum > maxsum){
            maxsum = sum;
            maxRow = i;
        }
        }
        cout << "Row " << i + 1 << ": " << maxsum << endl;
    }
    return 0;
    }