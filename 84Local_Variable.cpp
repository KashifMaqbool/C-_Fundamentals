#include<iostream>
using namespace std;
void show();
int main(){
    // cout<<"Value of n is : "<<n<<endl; n is not accessible in main();
    for(int i=1;i<=5; i++)
    show();         // control returns back here.
}
void show(){
    int n=1;        // n is local variable.
    n=n+4;
    cout<<"Value of n is : "<<n<<endl;
}

// procedure is this, that first loop will execute and then funciton will call function show() and a variable n is created in memory
// and print its value and then control will go to function variable deletes from memory and then again condition will 
// will check and funciton call and now again variable created in show();