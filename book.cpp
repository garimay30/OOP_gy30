#include<iostream>
using namespace std;
class book
{   
    public:
    int id;
    string name;
    void input()
    {
        cout<<"Enter the Book ID:";
        cin>>id;
        cout<<"Enter the Book name:";
        cin>>name;
    }
    void display()
    {
        cout<<"BOOK INFORMATION"<<endl;
        cout<<"Book ID:"<<id<<endl;
        cout<<"Book Name:"<<name<<endl;
    }

};
int main()
{
    book b1;
    book b2;

    b1.input();
    cout<<endl;
    b2.input();

    cout<<endl;
    cout<<endl;

    b1.display();
    cout<<endl;
    b2.display();

    return 0;
}
