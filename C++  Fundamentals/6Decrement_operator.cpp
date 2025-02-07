#include <iostream>
using namespace std;
int main(){
// int a=9, b=19;
// --a;
// cout<<"Value of a:"<<a<<endl;
//  b--;
//  cout<<"Value of a:"<<b<<endl;

// int a,b,c,d;
// a=b=c=d=7;
// b=--a;
// cout<<"Value of a:"<<a<< endl <<"Value of b:"<<b<<endl;
// c=d--;
// cout<<"Value of c:"<<c<< endl<<"Value of d:"<<d<<endl;

//(OR)

int a,b,c,d;
a=b=c=d=7;
--a;
b=a;
cout<<"Value of a:"<<a<< endl <<"Value of b:"<<b<<endl;
d=c;
c--;
cout<<"Value of c:"<<c<< endl<<"Value of d:"<<d<<endl;

}