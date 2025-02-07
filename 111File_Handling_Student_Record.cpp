#include<iostream>
#include<fstream>
using namespace std;
int main(){
    char name[20];
    int roll,marks;
    ofstream file("e:\\Student_Record.txt");
    if(!file){
        cout<<"File not created."<<endl;
        exit(1);
    }
    else{
        cout<<"File sussessfully created."<<endl;
        cout<<endl;
    }

    for(int i =0;i<3;i++){
        cout<<"*****Student "<<i+1<<" Record******"<<endl;
        cout<<"Name : ";
        cin.getline(name,20);
        cout<<"Roll No : ";
        cin>>roll;
        cout<<"Marks : ";
        cin>>marks;

        std::cin.get();         //This function prevents name to be skipped after first iteration e.g. during second 
                                //iteration only marks will be shown instes of name e.g. String or character datatype.
       

        file<<"*****Student "<<i+1<<" Record******"<<endl;
        file<<"Name : "<<name<<"\nRoll No : "<<roll<<"\nMarks : "<<marks<<endl;
    }

}