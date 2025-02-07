#include<iostream>
using namespace std;
int main(){
    // int arr[5]  = {9,8,5,4,3},i;
    // cout<<arr[0]<<endl;
    // cout<<arr[1]<<endl;
    // cout<<arr[2]<<endl;
    // cout<<&arr[3]<<endl;
    // cout<<&arr[4]<<endl;


    int arr[5]  = {9,8,5,4,3},i,*ptr;
    ptr = arr;
    // cout<<*ptr;
    for(i=1;i<=5;i++)
    cout<<ptr++<<endl;
}