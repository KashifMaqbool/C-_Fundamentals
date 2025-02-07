#include<iostream>
using namespace std;
int add(int, int);
int main(){
    int x,y;
    cout<<"Enter first value: ";
    cin>>x;
    cout<<"Enter second value: ";
    cin>>y;
    
    cout<<"First method:"<<endl;
    cout<<"_____________"<<endl;
    int z= add(x,y);                //control retrun here.
    cout<<"Addition is: "<<z<<endl;


    cout<<endl;
    cout<<"Second method:"<<endl;
    cout<<"_____________"<<endl;
    z= 10 + add(x,y);           //add some value with function call
    cout<<"Addition is: "<<z<<endl;


    cout<<endl;
    cout<<"Third method:"<<endl;
    cout<<"_____________"<<endl;
    cout<<"Addition is: "<<add(x,y)<<endl;      //call function while printing output


}
int add(int a, int b){
    return a+b;
}