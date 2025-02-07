#include <iostream>
using namespace std;

void show(int);

void add(int a, float b  ){     //formal parameters and value transfer from actual to formal paramerers  
                                //if we give int instead of float then it will take value in int not float.
    cout<<"Addition is: "<<a+b<<endl;
}
int main(){
    //int a=10;
      show(10);                 //can be pass simple value inside of giving variable haiving value

      add(20,30.89);            //actual parameteres
}
void show(int a){               //formal parameters
    cout<<"The value of a is : "<<a<<endl;
}