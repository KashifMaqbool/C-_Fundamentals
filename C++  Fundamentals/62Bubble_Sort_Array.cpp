#include<iostream>
using namespace std;
int main(){
    int arr[10] = {3,5,6,1,99,55,88,33,65,100};
    int i,j,temp;
    cout<<"*********************ORIGINAL ARRAY*************************"<<endl;
    for(i=0; i<10;i++){
        cout<<arr[i]<<"\t";
    }
    for(i=0; i<10; i++){
        for(j=0;j<10;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j]= arr[j+1];
                arr[j+1]= temp;
            }
        }
        cout<<"\n*************After "<<i+1<<" Iteration**************"<<endl;
        for(int n=0;n<10; n++){
            cout<<arr[n]<<"\t";
        }
    }
    
    cout<<"\n**********************SORTED ARRAY*********************"<<endl;
    for(i=0;i<10;i++){
        cout<<arr[i]<<"\t";
    }
}