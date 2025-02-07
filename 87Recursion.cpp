#include<iostream>
using namespace std;
long fact(int a){
    if(a<=0){
        return 1;
    }
    else{
        return a * fact(a-1);
    }
}
int main(){
    int n;
    cout<<"Enter Number to find factorial : ";
    cin>>n;
    int ans = fact(n);
    cout<<"The factorial of "<<n<< " is = "<<ans<<endl;
}