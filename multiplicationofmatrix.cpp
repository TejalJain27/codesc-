#include <iostream>
using namespace std;
int main() {3
    int arr[2][3],i,j;
    cout<<"provide array elements:";
    for(i = 0;i<2;i++){
        for(j = 0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"the array is";
    cout<<endl;
    for(i = 0;i<2;i++)
    {
        for(j = 0;j<3;j++){
            cout<<"\t"<<arr[i][j];
        }
        cout<<endl;
    }
    int result[3][2];
    int product[2][2];
    for (int i = 0; i < 2; ++i) {  
        for (int j = 0; j < 3; ++j) {  
            result[j][i] = arr[i][j];  
        }
    }
    cout << "Transposed Matrix: " << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < 2; ++i) {  
        for (int j = 0; j < 2; ++j) {  
            product[i][j] = 0;  
            for (int k = 0; k < 3; ++k) {  
                product[i][j] += arr[i][k] * result[k][j];
            }
        }
    }
    cout <<"Product of Matrices is"<<endl;
    for (i = 0; i <2;i++){
        for (j=0; j<2;j++){
            cout<< product[i][j] <<" ";
        }
        cout<<endl;
    }
    
}