#include<iostream>
#include<string>
using namespace std;

int main()
{
    string name[100];
    int roll[100],marks[100];
    int n=0,ch,r,i;
    while(true)
    {
        cout<<"1. Add Student"<<endl;
        cout<<"2. Display All"<<endl;
        cout<<"3. Search Student"<<endl;
        cout<<"4. Update Student"<<endl;
        cout<<"5. Delete Student"<<endl;
        cout<<"6. Exit"<<endl;
        cout<<"Enter Choice: ";
        cin>>ch;
        switch(ch)
        {
            case 1:
                cout<<"Enter Roll Number: ";
                cin>>roll[n];
                cin.ignore();
                cout<<"Enter Name: ";
                getline(cin,name[n]);
                cout<<"Enter Marks: ";
                cin>>marks[n];
                n++;
                cout<<"Student Added"<<endl;
                break;

            case 2:
                if(n==0)
                    cout<<"No Records"<<endl;
                else
                {
                    cout<<"Roll\tName\tMarks"<<endl;
                    for(i=0;i<n;i++)
                        cout<<roll[i]<<"\t"<<name[i]<<"\t"<<marks[i]<<endl;
                }
                break;

            case 3:
                cout<<"Enter Roll Number: ";
                cin>>r;
                for(i=0;i<n;i++)
                {
                    if(roll[i]==r)
                    {
                        cout<<"Roll: "<<roll[i]<<endl;
                        cout<<"Name: "<<name[i]<<endl;
                        cout<<"Marks: "<<marks[i]<<endl;
                        break;
                    }
                }
                if(i==n)
                    cout<<"Student Not Found"<<endl;
                break;

            case 4:
                cout<<"Enter Roll Number: ";
                cin>>r;
                for(i=0;i<n;i++)
                {
                    if(roll[i]==r)
                    {
                        cin.ignore();
                        cout<<"Enter New Name: ";
                        getline(cin,name[i]);
                        cout<<"Enter New Marks: ";
                        cin>>marks[i];
                        cout<<"Record Updated"<<endl;
                        break;
                    }
                }
                if(i==n)
                    cout<<"Student Not Found"<<endl;
                break;

            case 5:
                cout<<"Enter Roll Number: ";
                cin>>r;
                for(i=0;i<n;i++)
                {
                    if(roll[i]==r)
                    {
                        for(int j=i;j<n-1;j++)
                        {
                            roll[j]=roll[j+1];
                            name[j]=name[j+1];
                            marks[j]=marks[j+1];
                        }
                        n--;
                        cout<<"Record Deleted"<<endl;
                        break;
                    }
                }
                if(i==n)
                    cout<<"Student Not Found"<<endl;
                break;

            case 6:
                cout<<"Exited Successfully";
                return 0;

            default:
                cout<<"Invalid Choice"<<endl;
        }

        cout<<endl;
    }
}