#include<iostream>
using namespace std;
int main(){
    int a[2][2]= {25,4,6,8}, b[2][2]= {4,35,6,0},i,j;
    int c[2][2];
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            c[i][j] = a[i][j] - b[i][j];
        }
    }
    cout<<"\n*****First Matrix*****\n";
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<"\n*****Second Matrix*****\n";
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            cout<<b[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<"\n*****Addition of First and Second Matrix*****\n";
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            cout<<c[i][j]<<"\t";
        }
        cout<<endl;
    }
}