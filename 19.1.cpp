#include<iostream>
using namespace std;

int s=4;
int arr[4];
int top=-1;



void push1(int z)
{
if(top==s-1)
{
cout<<"overflow"<<endl;
return;
}
arr [++top]=z;
}



void pop1()
{
if(top==-1)
{
cout<<"underflow"<<endl;
return;
}
else
{
top--;
}
}

void display()
{
for(int i=top;i>=0;i--)
cout<<arr[i]<<endl;
}

int main()
 {
cout<<"Stack List is:"<<endl;
push1(10);
push1(20);
push1(25);
push1(30);
pop1();
display();
system("pause");
}