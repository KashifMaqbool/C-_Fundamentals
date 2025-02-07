#include<iostream>
using namespace std;
struct student
{
    int roll_no,marks[3];
};
int main(){
    student ali;
    system("cls");
    cout<<"Enter roll NO: ";
    cin>>ali.roll_no;
    cout<<"Enter Math Marks: ";
    cin>>ali.marks[0];
    cout<<"Enter electronics Marks: ";
    cin>>ali.marks[1];
    cout<<"Enter business Marks: ";
    cin>>ali.marks[2];
    cout<<"Enter programming Marks: ";
    cin>>ali.marks[3];

    cout<<"**********Ali Information**********"<<endl;
    cout<<"Math Marks : "<<ali.marks[0]<<endl;
    cout<<"Computer Marks : "<<ali.marks[1]<<endl;
    cout<<"Business Marks : "<<ali.marks[2]<<endl;
    cout<<"Programming Marks : "<<ali.marks[3]<<endl;   
}