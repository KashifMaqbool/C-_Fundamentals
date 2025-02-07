#include <iostream>
using namespace std;
int main(){
    int arr[5],i, sum=0;
    for(i=0;i<5;i++){
        cout<<"Enter Number at ["<<i<<"] = ";
        cin>>arr[i];
        sum =sum + arr[i];
    }
    cout<<"Numbers in array are : ";
    for(i=0;i<5; i++)
    cout<<arr[i]<<" , ";
    cout<<endl;
    cout<<"Sum of array numbers is = "<<sum<<endl;
    return 0;
}