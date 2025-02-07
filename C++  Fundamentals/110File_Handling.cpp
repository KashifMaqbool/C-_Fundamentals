#include <iostream>
#include <fstream>
using namespace std;
int main(){

    // int a=10, b=20,c;
    // ofstream file("e:\\Allaha.txt");
    // file<<a<<endl;
    // file<<b<<endl;
    // c = a+b;
    // file<<a<<" + "<<b<<" = "<<c<<endl;

    char name[20];
    ofstream file("e:\\Students.txt");
    cout<<"Enter Names of Students."<<endl;
    if (!file){
        cout<<"Error found:";
        exit(1);
    }
    for(int i=0;i<5;i++){
        cout<<"Student "<<i+1<<" : ";
        cin.getline(name,20);               //we can simply use cin>>name but due to this function it will not prin names after spaces and assign
                                            //name after space to next Student. e.g kashif Maqbool --> Student 1: kashif && Student 2: Maqbool
        file<<"Student "<<i+1<<" : "<<name<<endl;
    }
}