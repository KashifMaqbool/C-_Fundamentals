#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number."<<endl;
    cin>>n;

    /*if(n%2 ==0){
    cout<<"Number is Even."<<endl;
    }
    else{
    cout<<"Number is Odd."<<endl;
    }*/

    if(!(n%2 ==0)){
    cout<<"Number is Odd."<<endl;
    }
    else{
    cout<<"Number is Even."<<endl;
    }
    return 0;
}