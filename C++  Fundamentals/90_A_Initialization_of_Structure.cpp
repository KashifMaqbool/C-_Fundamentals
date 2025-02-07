#include<iostream>
using namespace std;
struct student
{
    int roll_no,marks;
    char grade;
};
int main(){
    student Ali = {10,990,'A'};
    cout<<"Roll Number: "<<Ali.roll_no<<endl;
    cout<<"Marks: "<<Ali.marks<<endl;
    cout<<"Grade: "<<Ali.grade<<endl;
}