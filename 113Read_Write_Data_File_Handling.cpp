#include<iostream>
#include<fstream>
using namespace std;
void write_data(){
    char name[30];
    //string name;              //Names print withour spacing
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
        std::cin.get();         //prevent name to be skipped e.g data in form of string or character.
        cout<<"*****Student "<<i+1<<" Record******"<<endl;
        cout<<"Name : ";
        //cin>>name;            //take input without spacing
        cin.getline(name,30);
        cout<<"Roll No : ";
        cin>>roll;
        cout<<"Marks : ";
        cin>>marks;

        file<<"*****Student "<<i+1<<" Record******"<<endl;
        file<<"Name : "<<name<<"\nRoll No : "<<roll<<"\nMarks : "<<marks<<endl;
    }
}
void read_data(){
    string text;
    ifstream outfile("e:\\Student_Record.txt");
    system("cls");
    while(getline(outfile,text)){
        cout<<text<<endl;
    }
    outfile.close();
}
int main(){
    int op;
    char choice;
    do{
        cout<<"**********Student Record System**********"<<endl;
        cout<<"Enter 1: to Write File."<<endl;
        cout<<"Enter 2: to Read File."<<endl;
        cin>>op;
        switch(op){
            case 1:
            write_data();
            break;

            case 2:
            read_data();
            break;
        }
        cout<<"Do you want to continue. \n Y: Yes \t N: No"<<endl;
        cin>>choice;
    }while(choice =='Y'|| choice == 'y');
}
