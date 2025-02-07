#include <iostream>
using namespace std;
int main(){
    float salary;
    int grade;
    cout<<"Enter your Salary: ";
    cin>>salary;
    cout<<"Enter your grade: ";
    cin>>grade;
    if( grade >= 50){
        salary = salary + ((salary *50)/100);
        cout<<"your salary with 50% bonus is = "<<salary<<endl;
    }
    else{
        salary = salary + ((salary * 25)/100);
        cout<<"Your salary with 25% Bonus is = "<<salary<<endl;
    }
    return 0;
}