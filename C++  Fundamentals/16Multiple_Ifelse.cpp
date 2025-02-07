#include <iostream>
using namespace std;
int main(){

    /*  To find nature of a given number.

    int n;
    cout<<"Enter the Number:";
    cin>>n;
    if(n>0){
        cout<<n<<" is a positive number."<<endl;
    }
    else if(n<0){
        cout<<n<<" is a negative number."<<endl;
    }
    else{
        cout<<n<<" number is equal to zero."<<endl;
    }
    */


   // Arithmetic calculations by using operators.

   float a,b;
   char c;
   cout<<"Enter First Number: "<<endl;
   cout<<"Enter Second Number: "<<endl;
   cout<<"Enter any operator: "<<endl;
   cin>>a>>b>>c;

   if(c=='+'){
    cout<<"The addition of "<< a<<" and "<<b<< " is = "<<a+b<<endl;
   }
   else if(c=='-'){
    cout<<"The subtraction of "<< a<<" and "<<b<< " is = "<<a-b<<endl;
   }
   else if(c=='*'){
    cout<<"The multiplication of "<< a<<" and "<<b<< " is = "<<a*b<<endl;
   }
   else if(c=='/'){
    cout<<"The division of "<< a<<" and "<<b<< " is = "<<a/b<<endl;
   }
   else{
    cout<<"Invalid Input"<<endl;
   }

    return 0;
}