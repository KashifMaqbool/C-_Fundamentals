#include<iostream>
using namespace std;
int main(){
// int a,b;
// a=38; b=45;
// a++;
// cout<<"use each operator:"<<a<<endl;
// ++b;
// cout<<"use each operator:"<<b<<endl;


// int x,y,z,w;
// x=y=z=w=5; 
// x= ++y;     //1. ++y then x=y
// cout<<"x:"<<x<<endl <<"y:"<<y<<endl;
// z=w++;      // 1. z=w then ++w
// cout<<"z:"<<z<<endl <<"w:"<<w<<endl;

//(OR)

int x,y,z,w;
x=y=z=w=5; 
++y;     //1. ++y then x=y
x=y;
cout<<"x:"<<x<<endl <<"y:"<<y<<endl;
z=w;      // 1. z=w then w++
w++;
cout<<"z:"<<z<<endl <<"w:"<<w<<endl;
}
