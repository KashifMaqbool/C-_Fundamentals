#include<iostream>
using namespace std;
void show();
int n = 1;          // n is now glbal variable
int main(){
    for(int i=1;i<=5; i++)
    show();         // control returns back here.
                    // now n will not delete from memory because it is global variable.
}
void show(){     
    n=n+4;
    cout<<"Value of n is : "<<n<<endl;
}