#include <iostream>
using namespace std;
int main(){
    float marks , total;
    cout<<"Enter your marks.";
    cin>>marks;
    if(marks<= 50){
        cout<<"you are Fail."<<endl;
    }
    
    else{
        total = marks + ((marks * 15)/100);
        cout<<"you are pass by gaining an extra percentage of 15% : "<< total<<endl;

        //cout<<"you are pass by gaining an extra percentage of 15% : "<<marks + ((marks * 15)/100) ;
    }
    system("pause"); 
}