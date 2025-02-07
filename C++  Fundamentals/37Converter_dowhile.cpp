#include<iostream>
using namespace std;
int main(){
    double cm,meter,km,mile;
    int ch;
    char choice;
    do{
        system("cls");
        cout<<"Length Converter:"<<endl;
        cout<<"_________________________________"<<endl;
        cout<<"1. Enter centimeter: "<<endl;
        cout<<"2. Enter meter: "<<endl;
        cout<<"3. Enter kilometer: "<<endl;
        cout<<"4. Enter mile: "<<endl;

        cout<<"Please Enter any choice given above: ";
        
        cin>>ch;
        switch(ch){
            case 1:
            cout<<endl;
            cout<<"please Enter entity in centimeter: ";
            cin>>cm;
            meter = cm/100;
            km = cm/100000;
            mile = cm/160934;
            cout<<cm<<" centimetere = "<<meter<<" meter."<<endl<<cm<<" centimeter = "<<km<<" kilometer."<<endl
            <<cm<<" centimeter = "<<mile<<" miles."<<endl;
            break;

            case 2:
            cout<<endl;
            cout<<"please Enter entity in meters: ";
            cin>>meter;
            cm = meter *100;
            km = meter/ 1000;
            mile = meter/1609.34;
            cout<<meter<<" meter = "<<cm<<" centimeter."<<endl<<meter<<" meter = "<<km<<" kilometer."<<endl
            <<meter<<" meter = "<<mile<<" miles."<<endl;
            break;

            case 3:
            cout<<endl;
            cout<<"please Enter entity in kilometers: ";
            cin>>km;
            cm = km*100000;
            meter = km*1000;
            mile = km/1.60934;
            cout<<km<<" kilometer = "<<cm<<" centimeter."<<endl<<km<<" kilometer = "<<meter<<" meter."<<endl
            <<km<<" kilometer = "<<mile<<" miles."<<endl;
            break;

            case 4:
            cout<<endl;
            cout<<"please Enter entity in miles: ";
            cin>>mile;
            cm = mile*160934;
            km = mile*1.60934;
            meter = km*1000;
            cout<<mile<<" miles = "<<cm<<" centimeter."<<endl<<mile<<" miles = "<<km<<" kilometer."<<endl
            <<mile<<" miles = "<<meter<<" meters."<<endl;
            break;

            default:
            cout<<endl;
            cout<<"Invalid input."<<endl;
        }
        cout<<"Do you want to continue(Y/N)?"<<endl;
        cin>>choice;
    }
    while(choice == 'y' || choice == 'Y');
    return 0;
}