#include<iostream>
using namespace std;
int main(){
    int arr[100][100],i,j,r,c;
    cout<<"Enter row no: ";
    cin>>r;
    cout<<"Enter column no: ";
    cin>>c;

    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            cout<<"Enter Element arr ["<<i<<"]["<<j<<"] = ";
            cin>>arr[i][j];
        }
    }
    cout<<"\nMatrix will be shown as ;\n ";
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
}