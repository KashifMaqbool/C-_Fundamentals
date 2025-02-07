#include<iostream>
using namespace std;
int main(){
    float kg,mun,ton;
    short ch;
    cout<<"40kg = 1mun:\n5mun = 1ton:"<<endl;
    cout<<"1. Enter kg: "<<endl;
    cout<<"2. Enter mun: "<<endl;
    cout<<"3. Enter ton: "<<endl;
    cout<<"Enter unit to exchange your weight (1---3): "<<endl;
    cout<<"___________________________________________"<<endl;
    cin>>ch;
    switch(ch){
        case 1:
        cout<<"Please Enter your entity in kg: ";
        cin>>kg;
        mun = kg/40;
        ton = mun/25;
        cout<<"Weight in mun is: "<<mun<<endl;
        cout<<"Weight in ton is: "<<ton<<endl;
        break;

        case 2:
        cout<<"Please Enter your entity in mun: ";
        cin>>mun;
        kg = mun*40;
        ton = mun/25;
        cout<<"Weight in kg is: "<<kg<<endl;
        cout<<"Weight in ton is: "<<ton<<endl;
        break;

        case 3:
        cout<<"Please Enter your entity in ton: ";
        cin>>ton;
        mun = ton*25;
        kg = mun*40;
        cout<<"Weight in mun is: "<<mun<<endl;
        cout<<"Weight in kg is: "<<kg<<endl;
        break;

        default:
        cout<<"Invalid Entity."<<endl;
    }
    return 0;
}