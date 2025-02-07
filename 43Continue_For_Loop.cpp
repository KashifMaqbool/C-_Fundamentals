#include<iostream>
using namespace std;
int main(){
    int n;
    for(int i=1; i<=5; i++){
        cout<<"Enter number: ";
        cin>>n;
        if(n<=0){
            continue;
        }
        cout<<"you have entered number. "<<n<<endl;
    }
    return 0;
}