#include<iostream>
using namespace std;

int main()
{
    int ch,r;
    string n;
    float m1,m2,m3,t,p;
    do
    {
        cout<<"1.Add Student"<<endl;
        cout<<"2.Display Student"<<endl;
        cout<<"3.Exit"<<endl;
        cout<<"Enter Choice: ";
        cin>>ch;

        switch(ch)
        {
            case 1:
                cout<<"Enter Roll: ";
                cin>>r;
                cout<<"Enter Name: ";
                cin>>n;
                cout<<"Enter Marks 1: ";
                cin>>m1;
                cout<<"Enter Marks 2: ";
                cin>>m2;
                cout<<"Enter Marks 3: ";
                cin>>m3;
                t=m1+m2+m3;
                p=t/3;
                cout<<"Record Saved"<<endl;
                break;

            case 2:
                cout<<"Roll: "<<r<<endl;
                cout<<"Name: "<<n<<endl;
                cout<<"Marks1: "<<m1<<endl;
                cout<<"Marks2: "<<m2<<endl;
                cout<<"Marks3: "<<m3<<endl;
                cout<<"Total: "<<t<<endl;
                cout<<"Percentage: "<<p<<endl;
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