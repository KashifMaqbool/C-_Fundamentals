#include <iostream>
using namespace std;
int main(){
    int r,c,i,j;
    cout<<"Enter row no: ";
    cin>>r;
    cout<<"Enter column no: ";
    cin>>c;

    int arr[r][c], trns[r][c] ;
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            cout<<"Enter Elements ["<<i<<"]["<<j<<"] = ";
            cin>>arr[i][j];
        }
    }
    cout<<"\nMatrix Element are ; \n"<<endl;
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            cout<<arr[i][j]<<"\t";
            trns[i][j] = arr[j][i];
        }
        cout<<endl;
    }
    cout<<"\nTranspose Matrix Element are ; \n"<<endl;
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            cout<<trns[i][j]<<"\t";
        }
        cout<<endl;
    }
}