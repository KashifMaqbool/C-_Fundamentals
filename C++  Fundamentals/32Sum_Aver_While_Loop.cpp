#include <iostream>
using namespace std;
int main(){
    int n=1,m, sum=0;
    float avg = 0.0;
    cout<<"Enter number upon which you want to print Numbers: ";
    cin>>m;
    while(n<=m){
        cout<<"n = "<<n<<endl;
        sum = sum + n;
        n++;
    }
    avg = sum/m;
    cout<<"Sum is = "<<sum<<endl;
    cout<<"Average is = "<<avg<<endl;
}