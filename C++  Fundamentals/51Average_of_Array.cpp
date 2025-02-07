#include <iostream>
using namespace std;
int main(){
    int i,sum =0; 
    float avg;
    int arr[10];
    for(i=0;i<10; i++){
        cout<<"Enter Numbers : ";
        cin>>arr[i];
        sum = sum + arr[i];
    }
    avg = sum/10;
    cout<<endl;
    cout<<"Entered Numbers are :"<<endl;
    cout<<"_____________________"<<endl;
    cout<<endl;
    for(i=1; i<10; i++)
    cout<<"Value at index ["<<i<<"] = "<<arr[i]<<endl;
    cout<<"Sum of entered values is : "<<sum<<endl;
    cout<<"Average of entered values is : "<<avg<<endl;
}