#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number in correspondence to days : ";
    cin>>n;
    switch (n)
    {
    case 1:
    cout<<n<<" is equals to Monday."<<endl;
        break;
        case 2:
    cout<<n<<" is equals to Tuesday."<<endl;
        break;
        case 3:
    cout<<n<<" is equals to Wednesday."<<endl;
        break;
        case 4:
    cout<<n<<" is equals to Thursday."<<endl;
        break;
        case 5:
    cout<<n<<" is equals to Friday."<<endl;
        break;
        case 6:
    cout<<n<<" is equals to Saturday."<<endl;
        break;
        case 7:
    cout<<n<<" is equals to Sunday."<<endl;
        break;
    
    default:
    cout<<"Enter number between 1 to 7."<<endl;
        break;
    }
}