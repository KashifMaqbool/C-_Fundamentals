#include<iostream>
using namespace std;
int main(){
    int arr[3][3], i,j;
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            cout<<"Enter value row "<<i<<" and column "<<j<<" = ";
            cin>>arr[i][j];
        }
    }
    cout<<"Array in Matrix Form."<<endl;
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}