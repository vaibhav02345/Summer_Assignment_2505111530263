#include<iostream>
using namespace std;

int main()
{
    int choice;
    float balance=10000,amount;
    do
    {
        cout<<"1.Check Balance"<<endl;
        cout<<"2.Deposit"<<endl;
        cout<<"3.Withdraw"<<endl;
        cout<<"4.Exit"<<endl;
        cout<<"Enter Choice: ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                cout<<"Balance: "<<balance<<endl;
                break;

            case 2:
                cout<<"Enter Amount: ";
                cin>>amount;
                balance+=amount;
                cout<<"Deposit Successful"<<endl;
                break;

            case 3:
                cout<<"Enter Amount: ";
                cin>>amount;

                if(amount<=balance)
                {
                    balance-=amount;
                    cout<<"Withdrawal Successful"<<endl;
                }
                else
                {
                    cout<<"Insufficient Balance"<<endl;
                }

                break;

            case 4:
                cout<<"Thank You"<<endl;
                break;

            default:
                cout<<"Invalid Choice"<<endl;
        }

    }while(choice!=4);

    return 0;
}