#include<iostream>
using namespace std;
int main(){
    int i,sum =0; 
    int arr[10]= {2,3,5,6,7,8,9,10,11,12};
    cout<<"Numbers in array are;"<<endl;
    for(i=0; i<10; i++){
        cout<<"value at index ["<<i<<"] = "<<arr[i]<<endl;
        sum = sum + arr[i];
    }
    cout<<"sum of Array is : "<<sum<<endl;
}