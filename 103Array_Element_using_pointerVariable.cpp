#include<iostream>
using namespace std;
int main(){
    int arr[] = {2,3,5,6,6};
    int *ptr,i;
    ptr = arr;
    for(i = 0;i<5;i++)
    cout<<*ptr<<endl;
    *ptr++;     //OR

    //cout<<*(ptr + i)<<endl; 
}