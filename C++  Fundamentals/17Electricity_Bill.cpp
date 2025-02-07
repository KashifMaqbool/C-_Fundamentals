#include <iostream>
using namespace std;
int main(){
    int previous,current,units,bill;
    float totalbill;
    cout<<"Enter previous reading: ";
    cin>>previous;
    cout<<"Enter current reading: ";
    cin>>current;
    
    units = current-previous;
    cout<<"Total units consumed are = "<<units<<endl;
    
    if(units>400)
    bill= units*20;
    else if(units>300 || units<400)
    bill= units*14;
    else
    bill = units *12;

    cout<<"Total units are: "<<units<<endl;
    cout<<"Total electricity bill is: "<<bill<<endl;

    if(bill>5000){
         totalbill = (bill + (bill*(15/100)));
        cout<<"Total bill including Tax due to exceeding above 5000 is: "<<totalbill<<endl;
    }
}