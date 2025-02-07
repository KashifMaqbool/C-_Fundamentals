#include<iostream>
using namespace std;
struct student
{
    int roll_no,marks[4];
};
int main(){
    student ali = {45,{90,95,80,85}};
    system("cls");
    cout<<"**********Ali Information**********"<<endl;
    cout<<"Mathematics Marks : "<<ali.marks[0]<<endl;
    cout<<"Computer    Marks : "<<ali.marks[1]<<endl;
    cout<<"Management  Marks : "<<ali.marks[2]<<endl;
    cout<<"Programming Marks : "<<ali.marks[3]<<endl;   
}