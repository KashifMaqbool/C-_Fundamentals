#include<iostream>
using namespace std;
void show();
int snow(){                     //second we define function before main function and we don't need to declare function
                                // if we define function before main() and it is now called as global function.
    cout<<"Hello computer:"<<endl;
}
int main(){
    cout<<"Hello world:"<<endl;
    snow();
    show();
}
void show(){                    //First way define function after main functiona and in it we have to declare function
    cout<<"Kashif Maqbool:"<<endl;
}
                                //Third method to make a function inside another file and call it in main function of this file.