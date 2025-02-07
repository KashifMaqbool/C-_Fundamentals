#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    // Endl
    cout<<"(1)"<<endl;
    cout<<"Hello"<<endl<<"World"<<endl;

    cout<<"(2)"<<endl;
    cout<<"Hello world.";
    cout<<"This is a new Line."<<endl;

    cout<<"(3)"<<endl;
    cout<<"Hello world."<<endl;
    cout<<"This is a new Line."<<endl;

    //Setw Example
    // To arrange data into fields we have to import <iomanip> library
    int a = 123980;
    string str = "Hello Kashif Maqbool.";
    cout<<"Showing the affect of setw:"<<endl;
    cout<<setw(10)<<a<<endl;
    cout<<setw(50)<<str<<endl;

    //Set pricion Manipulator
    double x = 847.28, y=94.4, r;
    r=x/y;
    cout<<setprecision(5)<<r<<endl;
    cout<<setprecision(4)<<r<<endl;
    cout<<setprecision(3)<<r<<endl;
    cout<<setprecision(2)<<r<<endl;
    cout<<setprecision(1)<<r<<endl;
}