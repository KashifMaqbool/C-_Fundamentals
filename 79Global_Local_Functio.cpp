#include<iostream>
using namespace std;
void showGlobal();      //This is gloal funciton declared globally and can be called through any main or userdefined funciton.
int main(){
    void showLocal();   //declared locally and can be called only inside main funciton or in which it is declared.
    showLocal();
    showGlobal();
}

void showLocal(){       //define function
    cout<<"This is Local function: "<<endl;
    showGlobal();
    //showLocal();        //This can be called only inside the main function because it is declared inside main.
}

void showGlobal(){      //define function
    cout<<"This is Global Function: "<<endl;
}