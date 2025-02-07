#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number: ";
    cin>>n;
    switch (n%2)
    {
    case 0:
    cout<<"Number is Even."<<endl;
        break;
    case 1:
    cout<<"Number is odd."<<endl;
        break;
    }
}