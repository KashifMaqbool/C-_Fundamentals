#include <iostream>
using namespace std;
int main(){
    int i, j,arr[5];
    for(i=0;i<5;i++){
        cout<<"Enter "<<i+1<<" Number = ";
        cin>>arr[i];
    }
    for(i=0; i<5; i++){
        for(j=0; j<arr[i]; j++)
        cout<<"*";
        cout<<arr[i]<<"Stars"<<endl;
    }
}