#include <iostream>
using namespace std;
int main(){
    double n,m=1,fact=1;
    cout<<"Enter any positive number: ";
    cin>>n;
    while(m<=n){
        fact = fact * m;
        m++;
    }
    cout<<"Factorial of "<<n<<" is "<<fact<<endl;
}