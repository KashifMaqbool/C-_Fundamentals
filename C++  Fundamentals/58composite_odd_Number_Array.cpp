#include<iostream>
using namespace std;
int main (){
    int i,j,arr[5], flag = -1;
    for(i=0; i<5; i++){
        cout<<"Enter Number ["<<i<<"] = ";
        cin>>arr[i];
    }
    
    for(i=0; i<5; i++){
        flag = -1;
        for(j=2; j<arr[i]/2; j++){
            if(arr[i]%j == 0){
                flag ++;
            }
        }
        if(flag != -1){
            cout<<arr[i]<<" is a composite number."<<endl;
        }
        else{
            cout<<arr[i]<<" is a  prime number."<<endl;
        }
    }
}