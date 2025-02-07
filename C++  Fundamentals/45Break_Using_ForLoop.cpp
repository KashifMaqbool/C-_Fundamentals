#include<iostream>
using namespace std;
int main(){
    int n, num;
    for(n=1; n<=5; n++){
        cout<<"enter any number.";
        cin>>num;
        if(num<=0){
            break;
        }
        cout<<n<<" ";
    }
}