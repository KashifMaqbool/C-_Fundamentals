#include <iostream>
using namespace std;
int main(){
    float salary, deduct , net_pay;
    cout<<"Enter Amount of Your Salary: ";
    cin>>salary;
    
    if(salary>=80000){
        deduct = salary * 15/100;
        net_pay = salary - deduct;
    }
    else if(salary>=60000 && salary<80000){
        deduct = salary * 15/100;
        net_pay = salary - deduct;
    }
    else if(salary>=40000 && salary<60000){
        deduct = salary * 15/100;
        net_pay = salary - deduct;
    }
    else if(salary<40000){
        deduct = 2500;
        net_pay = salary - deduct;
    }
    else{
        net_pay = salary;
    }
    
    cout<<"----------------------------------"<<endl;
    cout<<"your Net Salary amount is : "<<net_pay<<endl;
    cout<<"your deduct amount is : "<<deduct<<endl;

}