#include<iostream>
using namespace std;
struct book{
    int book_id, book_page;
    float book_price;
};
int main(){
    book b,b2;
    system("cls");
    cout<<"**********Enter Book1 Detail**********"<<endl;
    cout<<"Enter book ID : ";
    cin>>b.book_id;
    cout<<"Enter book pages : ";
    cin>>b.book_page;
    cout<<"Enter book price : ";
    cin>>b.book_price;

    cout<<"**********Enter Book2 Detail**********"<<endl;
    cout<<"Enter book ID : ";
    cin>>b2.book_id;
    cout<<"Enter book pages : ";
    cin>>b2.book_page;
    cout<<"Enter book price : ";
    cin>>b2.book_price;
    
    cout<<"__________Book 1__________"<<endl;
    cout<<"Book ID : "<<b.book_id<<endl;
    cout<<"Book pages : "<<b.book_page<<endl;
    cout<<"Book price : "<<b.book_price<<endl;

    cout<<"__________Book 2__________"<<endl;
    cout<<"Book ID : "<<b2.book_id<<endl;
    cout<<"Book pages : "<<b2.book_page<<endl;
    cout<<"Book price : "<<b2.book_price<<endl;
    }