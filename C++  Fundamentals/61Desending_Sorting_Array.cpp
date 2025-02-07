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
        for(j=i+1; j<10; j++){
            if(arr[i]<arr[j]){
                temp = arr[i];
                arr[i]= arr[j];
                arr[j]=temp;
            }
        }
    }
    
    cout<<"\n**********************SORTED ARRAY*********************"<<endl;
    for(i=0;i<10;i++){
        cout<<arr[i]<<"\t";
    }
}