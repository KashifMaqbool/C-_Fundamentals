#include<iostream>
using namespace std;
struct book{
    int book_id, book_page;
    float book_price;
};
int main(){
    book b;
    cout<<"Enter book ID : ";
    cin>>b.book_id;
    cout<<"Enter book pages : ";
    cin>>b.book_page;
    cout<<"Enter book price : ";
    cin>>b.book_price;

    cout<<"Book ID : "<<b.book_id<<endl;
    cout<<"Book pages : "<<b.book_page<<endl;
    cout<<"Book price : "<<b.book_price<<endl;
    }