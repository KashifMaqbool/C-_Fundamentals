#include<iostream>
using namespace std;
int main(){
    int i,odn,evn, arr[10];
    i=evn=odn=0;
    while(i<10){
        cout<<"Enter Number at index ["<<i<<" ] = ";
        cin>>arr[i];
        i++;
        (arr[i] %2 == 0? evn++: odn++);
    }
    cout<<"Number of Evens are: "<<evn<<endl;
    cout<<"Number of odds are: "<<odn<<endl;
}