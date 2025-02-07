#include<iostream>
using namespace std;
int main(){
    // int n;
    // for(n=1; n<=10; n++)
    // cout<<"n = "<<n<<endl;

    int n, sum=0;
    for(n=1; n<=10; n++){
        sum = sum + n;
        cout<<"n = "<<n<<endl;
    }
    cout<<"sum is : "<<sum<<endl;
}