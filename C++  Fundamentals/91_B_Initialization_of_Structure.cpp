#include<iostream>
using namespace std;
struct student
{
    int roll_no,marks;
    char grade;
};
int main(){
    student Ali = {10,990,'A'};
    student Mubashir = Ali;
    
    system("cls");
    cout<<"***********Ali Information***********"<<endl;
    cout<<"Roll Number: "<<Ali.roll_no<<endl;
    cout<<"Marks: "<<Ali.marks<<endl;
    cout<<"Grade: "<<Ali.grade<<endl;
    
    cout<<endl;

    cout<<"***********Mubashir Information***********"<<endl;
    cout<<"Roll Number: "<<Mubashir.roll_no<<endl;
    cout<<"Marks: "<<Mubashir.marks<<endl;
    cout<<"Grade: "<<Mubashir.grade<<endl;
}