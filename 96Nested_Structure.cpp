#include<iostream>
using namespace std;
struct lahore{
    int ln;
};
struct multan{
    int mn;
    lahore lan;
};
struct karachi{
    int kn;
    multan man;
};
int main(){
    karachi kan;
    cout<<"Enter Lahore Number : ";
    cin>>kan.man.lan.ln;
    cout<<"Enter Multan Number : ";
    cin>>kan.man.mn;
    cout<<"Enter Karachi Number : ";
    cin>>kan.kn;

    system("cls");
    cout<<"**********Cities Information**********"<<endl;
    cout<<"Lahore Number : "<<kan.man.lan.ln<<endl;
    cout<<"Multan Number : "<<kan.man.mn<<endl;
    cout<<"karachi Number : "<<kan.kn<<endl;
}