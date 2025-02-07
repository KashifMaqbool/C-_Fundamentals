#include<iostream>
using namespace std;
int main(){
    // int n;
    //  n=1;
    //  while(n<=5){
    //     cout<<n<<endl;
    //     n++;
    //  }

    int n,sum = 0;
    n=1;
    while(n<=10){
        cout<<"n = "<<n<<endl;
        sum = sum+n;
        n++;
    }
    cout<<"Sum = "<<sum<<endl;
}