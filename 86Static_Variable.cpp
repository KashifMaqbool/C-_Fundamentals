#include<iostream>
using namespace std;
void test();
int main(){
    int i;
    for(i=1;i<=5; i++)
    test();
}
void test(){
    static int n ;
    n = n+1;
    cout<<"The value of n : "<<n<<endl;
}