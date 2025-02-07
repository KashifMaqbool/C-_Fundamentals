#include<iostream>
using namespace std;
int main(){
    int i,odn,evn, sEven ,sOdd, arr[10];
    evn=odn=sEven=sOdd=0;
    for(i=0;i<10; i++){
        cout<<"Enter value at index ["<<i<<"] = ";
        cin>>arr[i];
        if(arr[i]%2 == 0){
            evn++;
            sEven = sEven + arr[i];
        }
        else{
            odn++;
            sOdd = sOdd + arr[i];
        }
    }
    cout<<"Number of Evens are: "<<evn<<endl;
    cout<<"sum of Evens are: "<<sEven<<endl;
    cout<<"Number of odds are: "<<odn<<endl;
    cout<<"Sum of Evens are: "<<sOdd<<endl;
}