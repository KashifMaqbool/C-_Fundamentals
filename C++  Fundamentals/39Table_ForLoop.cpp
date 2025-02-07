#include <iostream>
using namespace std;
int main(){
    int n,end,i;
    cout<<"Enter table number: ";
    cin>>n;
    cout<<"Enter ending number: ";
    cin>>end;

    for(int i=1; i<=end; i++)
    cout<<n<<" * "<<i<<" = "<<n*i<<endl;
}