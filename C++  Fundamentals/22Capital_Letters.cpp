#include<iostream>
using namespace std;
int main(){
    char c;
    cout<<"Enter any character."<<endl;
    cin>>c;
    if(c>='A' && c<='Z'){
        cout<<c<<" is a Capital Letter."<<endl;
    }
    else if(c>='a' && c<='z'){
        cout<<c<<" is a Small Letter."<<endl;
    }
    else if(c>='0' && c<='9'){
        cout<<c<<" is a Number."<<endl;
    }
    else{
        cout<<c<<" is a Special Letter."<<endl;
    }
    return 0;
}