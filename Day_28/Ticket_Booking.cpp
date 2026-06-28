#include<iostream>
#include<string>
using namespace std;

class Ticket{
public:
    int id;
    string name;
    string movie;
    int seats;
    float price;
    float total;

    void input()
    {
        cout<<"Enter Customer ID: ";
        cin>>id;
        cin.ignore();
        cout<<"Enter Customer Name: ";
        getline(cin,name);
        cout<<"Enter Movie Name: ";
        getline(cin,movie);
        cout<<"Enter Number of Seats: ";
        cin>>seats;
        cout<<"Enter Ticket Price: ";
        cin>>price;
        total=seats*price;
    }

    void display()
    {
        cout<<"\nTicket Details\n";
        cout<<"Customer ID : "<<id<<endl;
        cout<<"Customer Name : "<<name<<endl;
        cout<<"Movie Name : "<<movie<<endl;
        cout<<"Seats : "<<seats<<endl;
        cout<<"Total Amount : "<<total<<endl;
    }
};

int main()
{
    Ticket t;
    t.input();
    t.display();

    return 0;
}