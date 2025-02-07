#include <iostream>
using namespace std;
int main(){
    // int n, sum =0;
    // for(n=0; n<=100; n++){
    //     if(n%2!=0){
    //         continue;
    //     }
    //     cout<<n<<" ";
    //     sum = sum +n;
    // }
    // cout<<endl;
    // cout<<"Sum of Even Numbers is : "<<sum<<endl;

    //For Odd Numbers

    int n, sum =0;
    for(n=0; n<=100; n++){
        if(n%2==0){
            continue;
        }
        cout<<n<<" ";
        sum = sum +n;
    }
    cout<<"\nSum of Odd Numbers is : "<<sum<<endl;
}