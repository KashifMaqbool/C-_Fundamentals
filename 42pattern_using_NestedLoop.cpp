#include<iostream>
using namespace std;
int main(){
    // int i,j;
    // for(i=1; i<=10; i++){
    //     for(j=1; j<=i; j++)
    //     cout<<"*";
    //     cout<<endl;
    // }

    //usning while Loop
    int i=1,j;
    while(i<=10){
        j=1;
        while(j<=i){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
}