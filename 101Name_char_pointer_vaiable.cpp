#include<iostream>
using namespace std;
int main(){
    char *name = "Kashif", sname;
    cout<<"The name is : ";
    for(int i=0;i<6;i++){
        sname= *name;
        cout<<sname;
        *name++;
    }

}