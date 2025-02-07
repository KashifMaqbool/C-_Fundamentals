#include <iostream>
using namespace std;
int main(){
    int arr1[100][100], arr2[100][100], arr3[100][100];
    int r1,c1,r2,c2,i,j;
    char choice;

    do{
        system("cls");
    cout<<"Enter rows and columns of first matrix 1 : ";
    cin>>r1>>c1;
    cout<<"Enter rows and columns of first matrix 2 : ";
    cin>>r2>>c2;

    if((r1 != r2) || (c1 != c2)){
        cout<<"Addition is not possible because rows and columns must be equal: "<<endl;
        cout<<"Do you want to continue:(y/s)?";
        cin>>choice;
    }

    else{
        cout<<"\nFirst Matrix\n";
        cout<<"_____________________"<<endl;
    for(i=0; i<r1; i++){
        for(j=0; j<c1; j++){
            cout<<"Element ["<<i<<"]["<<j<<"] = ";
            cin>>arr1[i][j];
        }
    }
    cout<<"\nSecond Matrix\n";
    cout<<"_____________________"<<endl;
    for(i=0; i<r2; i++){
        for(j=0; j<c2; j++){
            cout<<"Element ["<<i<<"]["<<j<<"] = ";
            cin>>arr2[i][j];
        }
    }
    for(i=0; i<r1; i++){
        for(j=0; j<c1; j++){
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    cout<<"\nFirst Matrix\n";
    cout<<"_____________________"<<endl;
    for(i=0; i<r1; i++){
        for(j=0; j<c1; j++){
            cout<<arr1[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<"\nSecond Matrix\n";
    cout<<"_____________________"<<endl;
    for(i=0; i<r2; i++){
        for(j=0; j<c2; j++){
            cout<<arr2[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<"\nAddition of First and Second Matrix\n";
    cout<<"_____________________________________"<<endl;
    for(i=0; i<r1; i++){
        for(j=0; j<c1; j++){
            cout<<arr3[i][j]<<"\t";
        }
        cout<<endl;
    }
    }

    }while(choice == 'Y' || choice == 'y');
}