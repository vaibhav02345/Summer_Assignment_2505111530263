#include<iostream>
using namespace std;

int main()
{
    int ch,id;
    string n;
    float b,h,a,pf,net;

    do
    {
        cout<<"1.Calculate Salary"<<endl;
        cout<<"2.Display Salary"<<endl;
        cout<<"3.Exit"<<endl;
        cout<<"Enter Choice: ";
        cin>>ch;

        switch(ch)
        {
            case 1:
                cout<<"Enter ID: ";
                cin>>id;
                cout<<"Enter Name: ";
                cin>>n;
                cout<<"Enter Basic Salary: ";
                cin>>b;
                h=b*0.20;
                a=b*0.10;
                pf=b*0.05;
                net=b+h+a-pf;
                cout<<"Salary Calculated"<<endl;
                break;

            case 2:
                cout<<"ID: "<<id<<endl;
                cout<<"Name: "<<n<<endl;
                cout<<"Basic Salary: "<<b<<endl;
                cout<<"HRA: "<<h<<endl;
                cout<<"Allowance: "<<a<<endl;
                cout<<"PF: "<<pf<<endl;
                cout<<"Net Salary: "<<net<<endl;
                break;

            case 3:
                cout<<"Exit"<<endl;
                break;

            default:
                cout<<"Invalid Choice"<<endl;
        }
    }
    while(ch!=3);

    return 0;
}