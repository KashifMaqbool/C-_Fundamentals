#include<iostream>
using namespace std;
int main(){
    char name[30], *ptr;
    cout<<"Enter Your Name: ";
    cin.get(name,30);
    ptr = name;
    cout<<"Name = "<<name<<endl;
    cout<<"Name = "<<ptr<<endl;
}