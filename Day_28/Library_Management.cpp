#include<iostream>
#include<string>
using namespace std;

class Library{
public:
    int id;
    string name;
    string author;
    void input()
    {
        cout<<"Enter Book ID: ";
        cin>>id;
        cin.ignore();
        cout<<"Enter Book Name: ";
        getline(cin,name);
        cout<<"Enter Author Name: ";
        getline(cin,author);
    }

    void display()
    {
        cout<<"\nBook Details\n";
        cout<<"Book ID : "<<id<<endl;
        cout<<"Book Name : "<<name<<endl;
        cout<<"Author : "<<author<<endl;
    }
};

int main(){
    Library b;
    b.input();
    b.display();

    return 0;
}