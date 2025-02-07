#include<iostream>
using namespace std;
int main(){
    /*// int arr[5],i;
    // cout<<"Enter first Element: ";
    // cin>>arr[0];
    // cout<<"Enter second Element: ";
    // cin>>arr[1];
    // cout<<"Enter Third Element: ";
    // cin>>arr[2];
    // cout<<"Enter fourth Element: ";
    // cin>>arr[3];
    // cout<<"Enter fifth Element: ";
    // cin>>arr[4];
    // cout<<"_______________________"<<endl;
    // cout<<"Elements in array are: "<<endl;
    // for(int i=0; i<5; i++){
    //     cout<<arr[i]<<endl;
    // }*/

    //Taking input through Loop

    int arr[5],i;
    for(int i=0; i<5; i++){
        cout<<"Enter Number: ";
        cin>>arr[i];
    }
    cout<<"____________________"<<endl;
    cout<<"Numbers in array are: ";
    for(i=0;i<5; i++){
        cout<<arr[i]<<" ";
    }
}