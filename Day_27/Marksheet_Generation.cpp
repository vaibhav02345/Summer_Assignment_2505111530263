#include<iostream>
using namespace std;

int main()
{
    int ch,r;
    string n;
    float m1,m2,m3,m4,m5,t,p;
    do
    {
        cout<<"1.Generate Marksheet"<<endl;
        cout<<"2.Display Marksheet"<<endl;
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
                cout<<"Enter Marks1: ";
                cin>>m1;
                cout<<"Enter Marks2: ";
                cin>>m2;
                cout<<"Enter Marks3: ";
                cin>>m3;
                cout<<"Enter Marks4: ";
                cin>>m4;
                cout<<"Enter Marks5: ";
                cin>>m5;
                t=m1+m2+m3+m4+m5;
                p=t/5;
                cout<<"Marksheet Generated"<<endl;
                break;

            case 2:
                cout<<"Roll: "<<r<<endl;
                cout<<"Name: "<<n<<endl;
                cout<<"Marks1: "<<m1<<endl;
                cout<<"Marks2: "<<m2<<endl;
                cout<<"Marks3: "<<m3<<endl;
                cout<<"Marks4: "<<m4<<endl;
                cout<<"Marks5: "<<m5<<endl;
                cout<<"Total: "<<t<<endl;
                cout<<"Percentage: "<<p<<endl;

                if(p>=90)
                    cout<<"Grade: A+"<<endl;
                else if(p>=75)
                    cout<<"Grade: A"<<endl;
                else if(p>=60)
                    cout<<"Grade: B"<<endl;
                else if(p>=40)
                    cout<<"Grade: C"<<endl;
                else
                    cout<<"Grade: Fail"<<endl;

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