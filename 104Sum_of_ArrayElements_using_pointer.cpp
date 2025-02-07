#include<iostream>
using namespace std;
int main(){
    int arr[] = {2,4,5,6,7}, *ptr, sum = 0;
    ptr = arr;
    for(int i=0;i<5;i++){
        cout<<*ptr<<endl;
        sum = sum + *ptr;
        *ptr++;
    }
    cout<<"Sum = "<<sum;
}