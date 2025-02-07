#include<iostream>
using namespace std;
int main(){
    char name;
    cout<<"Enter your Name : ";
    //cin>>name;
    //cin.getline(name,20);
    cin.get(name);          //while using this funciton do not initialize your variable name e.g.char name = [20];
    cout<<"Your name is "<<name<<endl;
}