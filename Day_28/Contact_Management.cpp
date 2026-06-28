#include<iostream>
#include<string>
using namespace std;

class Contact{
public:
    string name;
    string phone;
    string email;
    string address;

    void input()
    {
        cout<<"Enter Name: ";
        getline(cin,name);
        cout<<"Enter Phone Number: ";
        getline(cin,phone);
        cout<<"Enter Email: ";
        getline(cin,email);
        cout<<"Enter Address: ";
        getline(cin,address);
    }

    void display()
    {
        cout<<"\nContact Details\n";
        cout<<"Name : "<<name<<endl;
        cout<<"Phone : "<<phone<<endl;
        cout<<"Email : "<<email<<endl;
        cout<<"Address : "<<address<<endl;
    }
};

int main()
{
    Contact c;
    c.input();
    c.display();

    return 0;
}