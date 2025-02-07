#include<iostream>
using namespace std;
int main(){
    int a=10 , b=20,temp;
    system("cls");
    cout<<"*******Swapping using third variable*******"<<endl;
    cout<<endl;
    cout<<"Before swapping"<<endl;
    cout<<"a : "<<a<<" b : "<<b<<endl;
    cout<<"After swapping"<<endl;
    temp = a;
    a=b;
    b=temp;
    cout<<"a :"<<a<<" b : "<<b<<endl;


    cout<<endl;
    cout<<"*******Swapping withour third variable*******"<<endl;
    cout<<endl;
    cout<<"Before swapping"<<endl;
    cout<<"a : "<<a<<" b : "<<b<<endl;
    cout<<"After swapping"<<endl;
    a= a+b;
    b= a-b;
    a=a-b;
    cout<<"a : "<<a<<" b : "<<b<<endl;
}