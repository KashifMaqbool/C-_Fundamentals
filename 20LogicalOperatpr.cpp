#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter Three Numbers: "<<endl;
    cin>>a>>b>>c;
    if(a>b && a>c){
        cout<<a<<" is greater number."<<endl;
    }
    else if(b>a && b>c){
        cout<<b<<" is greater number."<<endl;
    }
    else{
        cout<<c<<" is greater number."<<endl;
    }
}