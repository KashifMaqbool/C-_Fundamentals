#include <iostream>
using namespace std;
int main(){

   /* int n;
    cout<<"Entr the number:";
    cin>>n;
    if(n%2 == 0)
    cout<<n <<" is a Even number"<<endl;*/

    /*
    // Find minumum and maximum numbers
    int a,b,c,d,e,min,max;
    cout<<"Enter Five numbers:"<<endl;
    cin>>a>>b>>c>>d>>e;
    min = max = a;
    
    //for minumum value
    if(b<a)
    min=b; 
    if(c<min)
    min=c;
    if(d<min)
    min=d;
    if(e<min)
    min=e;

    // for maximum numbers:
    if(b>a)
    max=b;
    if(c>max)
    max=c;
    if(d>max)
    max=d;
    if(e>max)
    max=e;

    cout<<"The minimum value is = "<< min<<endl;
    cout<<"The maximum value is = "<<max<<endl;
    */


   /*
   int n;
   cout<<"Enter any Number:"<<endl;
   cin>>n;
   if(n%2 ==0)
   cout<<n<<" is an even number."<<endl;
   if(n%2 != 0)
   cout<<n<<" is as odd number."<<endl;
   */

   // if marks are greater than 60 add 15 percent of marks in it. 
   int marks, total;
   cout<<"Enter your marks."<<endl;
   cin>>marks;
   if(marks > 60){
   total = marks + ((marks *15)/ 100);
   cout<<"your total marks are :"<<total<<endl;
} 
}