#include<iostream>
using namespace std;


//call by reference
void show(int&, int&);
int main(){
    int n=10;
    int m=20;
    show(n,m);
    cout<<"a = : "<<n<<endl;
    cout<<"b = : "<<m<<endl;
}
void show(int &a, int &b){
    a = a+15;
    b= b+5;
}


// void show(int, int);
// int main(){
//     int n=10;
//     int m=20;
//     cout<<"Before calling: "<<endl;
//     cout<<"a = : "<<n<<endl;
//     cout<<"b = : "<<m<<endl;

//     show(n,m);                // not affect on  actual parameters

//     cout<<"After calling: "<<endl;
//     cout<<"a = : "<<n<<endl;
//     cout<<"b = : "<<m<<endl;
// }
// void show(int a, int b){      //formal paramerers now have not any affect on actual parameters
//     a = a+15;
//     b= b+5;
// }