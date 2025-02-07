#include <iostream>
using namespace std;
int main(){
    int n,num,rem,rev=0;
    cout<<"Enter number:";
    cin>>n;
    num = n;
    while(n!=0){
        rem = n%10;
        rev = (rev * 10) + rem;
        n = n/10;
    }
    cout<<rev<<" is a Reverse number."<<endl;
    if(num == rev){
        cout<<num<<"is a palindrome number."<<endl;
    }
    else{
        cout<<num<<" is not a palindrome number."<<endl;
    }
}