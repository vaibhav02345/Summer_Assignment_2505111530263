#include<iostream>
#include<string>
using namespace std;

class Bank{
public:
    int accno;
    string name;
    float balance;
    float amount;

    void input()
    {
        cout<<"Enter Account Number: ";
        cin>>accno;
        cin.ignore();

        cout<<"Enter Customer Name: ";
        getline(cin,name);
        cout<<"Enter Initial Balance: ";
        cin>>balance;
    }

    void deposit()
    {
        cout<<"Enter Deposit Amount: ";
        cin>>amount;
        balance=balance+amount;
    }

    void withdraw()
    {
        cout<<"Enter Withdraw Amount: ";
        cin>>amount;
        if(amount<=balance)
            balance=balance-amount;
        else
            cout<<"Insufficient Balance"<<endl;
    }

    void display()
    {
        cout<<"\nAccount Details\n";
        cout<<"Account Number : "<<accno<<endl;
        cout<<"Customer Name : "<<name<<endl;
        cout<<"Balance : "<<balance<<endl;
    }
};

int main(){
    Bank a;
    a.input();
    a.deposit();
    a.withdraw();
    a.display();

    return 0;
}