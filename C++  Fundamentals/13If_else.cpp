#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number:";
    cin>>n;
    if(n%2 == 0){
        cout<<n<<" is an Even Number."<<endl;
    }
    else{
        cout<<n<<" is an Odd Number."<<endl;
    }
    return 0;
}