#include<iostream>
using namespace std;
void add();
void sub();
void mul();
void div();
void mod();
int main(){
    char ch,choice;
    do{
        system("cls");
        cout<<"Enter any operator among these (+ , - , * , / , %) : ";
    cin>>ch;
    switch(ch){
    case '+':
    add();
    break;
    case '-':
    sub();
    break;
    case '*':
    mul();
    break;
    case '/':
    div();
    break;
    case '%':
    mod();
    break;
    default:
    cout<<"Invalid Operator."<<endl;
    }
    cout<<"Do you want to continue(y/n)? ";
    cin>>choice;
    }while(choice =='y'|| choice == 'Y');
    
}
void add(){
    int a,b;
    cout<<"Enter a : ";
    cin>>a;
    cout<<"Enter b : ";
    cin>>b;
    cout<<"sum of "<<a<<" and "<<b<<" is = "<<a+b<<endl;
}
void sub(){
    int a,b;
    cout<<"Enter a : ";
    cin>>a;
    cout<<"Enter b : ";
    cin>>b;
    cout<<"subtract of "<<a<<" and "<<b<<" is = "<<a-b<<endl;
}
void mul(){
    int a,b;
    cout<<"Enter a : ";
    cin>>a;
    cout<<"Enter b : ";
    cin>>b;
    cout<<"multiplication of "<<a<<" and "<<b<<" is = "<<a*b<<endl;
}
void div(){
    int a,b;
    cout<<"Enter a : ";
    cin>>a;
    cout<<"Enter b : ";
    cin>>b;
    cout<<"division of "<<a<<" and "<<b<<" is = "<<a/b<<endl;
}
void mod(){
    int a,b;
    cout<<"Enter a : ";
    cin>>a;
    cout<<"Enter b : ";
    cin>>b;
    cout<<"modulus of "<<a<<" and "<<b<<" is = "<<a%b<<endl;
}