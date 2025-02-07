#include<iostream>
using namespace std;
int main(){
    int n,*ptr;
    n = 10;
    ptr = &n;
    cout<<"The value of n = "<<n<<endl;
    cout<<"The address of n = "<<&n<<endl;
    cout<<"The value of n using pointer variable = "<<*ptr<<endl;
    cout<<"The address of n using pointer variable = "<<ptr<<endl;
}