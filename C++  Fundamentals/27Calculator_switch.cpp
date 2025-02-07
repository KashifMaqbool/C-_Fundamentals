#include <iostream>
#include<iomanip>
using namespace std;
int main(){
    float a,b;
    char oper;
    cout<<"Enter first Number: ";
    cin>>a;
    cout<<"Enter second Number:";
    cin>>b;
    cout<<"Enter any arithmetic operator:";
    cin>>oper;
    switch(oper){
        case '+':
        cout<<"a+b = "<<setprecision(2)<<a+b<<endl;
        break;
        case '-':
        cout<<"a-b = "<<setprecision(2)<<a-b<<endl;
        break;
        case '*':
        cout<<"a*b = "<<setprecision(2)<<a*b<<endl;
        break;
        case '/':
        cout<<"a/b = "<<setprecision(3)<<a/b<<endl;
        break;
        default:
        cout<<"Invalid Input."<<endl;
        break;
    }
    return 0;
}
