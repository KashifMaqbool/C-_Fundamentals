#include<iostream>
using namespace std;
int main(){
    int arr[5],i;
    for(i=0;i<5; i++){
        cout<<"Enter Number "<<i<<" = ";
        cin>>arr[i];
    }
    cout<<"*****Actual Order*******"<<endl;
    for(i=0;i<5; i++){
        cout<<arr[i]<<" ";
    }
    //cout<<endl;
    cout<<"\n*****Reverse Order*******"<<endl;
    for(i=4;i>=0; i--){
        cout<<arr[i]<<" ";
    }
    
}