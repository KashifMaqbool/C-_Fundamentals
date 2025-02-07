#include<iostream>
using namespace std;
void show(int,int);             //formal parameters
int main(){
    int n = 10, m=20;
    cout<<"Value before calling : "<<endl;
    cout<<"n = "<<n<<endl;
    cout<<"m = "<<m<<endl;

    show(15,30);                  //Actual parameters

    //cout<<"a = "<<a<<endl;    //not run because "a" is not in scope of main function
}
void show(int a, int b){        //formal parameters
    cout<<"Value after calling : "<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
}