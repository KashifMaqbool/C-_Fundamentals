#include <iostream>
using namespace std;
int main(){
    int i, arr[10], min, max;
    for(i=0; i<10; i++){
        cout<<"Enter "<<i<<" Number : ";
        cin>>arr[i];
    }
    max = min = arr[0];
    for(i=0; i<10; i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    cout<<"Maximum Number is : "<<max<<endl;
    for(i=0; i<10; i++){
        if(min>arr[i]){
            min = arr[i];
        }
    }
    cout<<"Minimum Number is : "<<min<<endl;
}