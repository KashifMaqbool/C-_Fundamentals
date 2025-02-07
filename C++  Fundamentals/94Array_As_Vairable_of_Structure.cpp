#include<iostream>
using namespace std;
struct book{
    int id,page;
    char name[15];
};
int main(){
    book b[2];
    system("cls");
    cout<<"Enter Book 1 information."<<endl;
    cout<<"_________________________"<<endl;
    cout<<"Enter book 1 id : ";
    cin>>b[0].id;
    cout<<"Enter book 1 page : ";
    cin>>b[0].page;
    cout<<"Enter book 1 name : ";
    cin>>b[0].name;

    cout<<endl;

    cout<<"Enter Book 2 information."<<endl;
    cout<<"___________________________"<<endl;
    cout<<"Enter book 2 id : ";
    cin>>b[1].id;
    cout<<"Enter book 2 page : ";
    cin>>b[1].page;
    cout<<"Enter book 2 name : ";
    cin>>b[1].name;

    system("cls");
    cout<<"**********Book 1 Information**********"<<endl;
    cout<<"ID : "<<b[0].id<<endl;
    cout<<"Page : "<<b[0].page<<endl;
    cout<<"Name : "<<b[0].name<<endl;

    cout<<endl;

    cout<<"**********Book 2 Information**********"<<endl;
    cout<<"ID : "<<b[1].id<<endl;
    cout<<"Page : "<<b[1].page<<endl;
    cout<<"Name : "<<b[1].name<<endl;
}