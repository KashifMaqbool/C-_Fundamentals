#include <iostream>
#include<fstream>
using namespace std;
int main(){
    string text;
    ifstream outfile("e:\\Student_Record.txt");
    system("cls");
    while(getline(outfile,text)){
        cout<<text<<endl;
    }
    outfile.close();
}