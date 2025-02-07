#include<iostream>
using namespace std;
int main(){
    int n, start,end,en = 0;
    cout<<"Enter starting number:";
    cin>>start;
    cout<<"Enter ending number: ";
    cin>>end;

    n = start;
        do{
        if(n%2 == 0){
            cout<<n<<"  ";
            en++;
        }
        n++;
    }while(n<=end);
    cout<<"\nTotal Even Numbers are: "<<en<<endl;


    /*if(start<end){
        n = start;
        do{
        if(n%2 == 0){
            cout<<n<<"  ";
            en++;
        }
        n++;
    }while(n<=end);
    cout<<"\nTotal Even Numbers are: "<<en<<endl;
    }
    else{
        n = start;
        do{
        if(n%2 == 0){
            cout<<n<<"  ";
            en++;
        }
        n--;
    }while(n>=end);
    cout<<"\nTotal Even Numbers are: "<<en<<endl;
    }   */
    return 0;
}