#include<iostream>
using namespace std;
struct book{
    int id,page;
    char name[25];
};
int main(){
    book b[3] = {{10,20,"Mobile Programming"},{20,30,"Web Programming"},{30,40,"Database Programming"}};

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

    cout<<endl;

    cout<<"**********Book 3 Information**********"<<endl;
    cout<<"ID : "<<b[2].id<<endl;
    cout<<"Page : "<<b[1].page<<endl;
    cout<<"Name : "<<b[2].name<<endl;
}