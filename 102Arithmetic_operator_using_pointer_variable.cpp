#include<iostream>
using namespace std;
int main(){
    int arr[2] = {55,5};
    int *ptr , res;
    ptr = arr;
    cout<<"Address of value1 = "<<ptr<<endl;
    cout<<"Value1 at Address = "<<*ptr<<endl;

    cout<<endl;
    *ptr++;
    cout<<"Address of value2 = "<<ptr<<endl;
    cout<<"Value2 at Address = "<<*ptr<<endl;

    res = *ptr-- + *ptr++;      // You can use any other arithmetic operator instead of addition.
    cout<<"Resutl = "<<res<<endl;
}