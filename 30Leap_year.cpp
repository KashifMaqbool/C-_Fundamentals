#include<iostream>
using namespace std;
int main()
{
    /*int n;
    cout<<"Enter the year: ";
    cin>>n;
    if(n%4 ==0){
        cout<<n<<" is a Leap year."<<endl;
    }
    else{
        cout<<n<<" is not a Leap year."<<endl;
    }*/

    int n;
    cout<<"Enter the Year: ";
    cin>>n;
    (n%4 ==0)?cout<<n<<" is a leap year.":cout<<n<<" is not a leap year."<<endl;
}