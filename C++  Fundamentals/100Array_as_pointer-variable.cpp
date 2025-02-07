#include<iostream>
using namespace std;
int main(){
    int *p[3],n1,n2,n3;
    cout<<"Enter Numbers: "<<endl;
    cin>>n1>>n2>>n3;
    p[0]= &n1;
    p[1]= &n1;
    p[2]= &n1;
    cout<<"__________________________________________"<<endl;
    for(int i=0;i<3;i++){
        cout<<p<<"\t";
    }
}