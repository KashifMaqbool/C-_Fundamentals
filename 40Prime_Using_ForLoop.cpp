#include <iostream>
using namespace std;
int main(){
    int n,i,p=0;
    cout<<"Enter any number: ";
    cin>>n;
    for(i=2; i<=n/2; i++){
        if(n%i==0)
        p++;
    }
    if(p==0)
    cout<<n<<" is a prime number."<<endl;
    else
    cout<<n<<" is a composite number OR not prime number."<<endl;
}