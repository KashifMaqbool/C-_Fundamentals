#include<iostream>
using namespace std;
int main(){
    int arr[10] = {2,5,6,8,9,10,19,12,14,15};
    int i,n, loc = -1;
    cout<<"Enter number to find: ";
    cin>>n;
    for(i=0; i<10; i++){
        if(arr[i] == n){
            loc = i;
            break;
        }
    }
    if(loc == -1){
        cout<<n<<" is not found : "<<endl;
    }
    else{
        cout<<n<<" is found at index "<<loc<<endl;
    }
}