#include<iostream>
#include<string>
using namespace std;

int main()
{
    int id[100],salary[100];
    string name[100];
    int n=0,ch,eid,i;
    while(true)
    {
        cout<<"1. Add Employee"<<endl;
        cout<<"2. Display Employees"<<endl;
        cout<<"3. Search Employee"<<endl;
        cout<<"4. Update Employee"<<endl;
        cout<<"5. Delete Employee"<<endl;
        cout<<"6. Exit"<<endl;
        cout<<"Enter Choice: ";
        cin>>ch;
        switch(ch)
        {
            case 1:
                cout<<"Enter Employee ID: ";
                cin>>id[n];
                cin.ignore();
                cout<<"Enter Employee Name: ";
                getline(cin,name[n]);
                cout<<"Enter Salary: ";
                cin>>salary[n];
                n++;
                cout<<"Employee Added"<<endl;
                break;

            case 2:
                if(n==0)
                    cout<<"No Employees Found"<<endl;
                else
                {
                    cout<<"ID\tName\tSalary"<<endl;
                    for(i=0;i<n;i++)
                        cout<<id[i]<<"\t"<<name[i]<<"\t"<<salary[i]<<endl;
                }
                break;

            case 3:
                cout<<"Enter Employee ID: ";
                cin>>eid;
                for(i=0;i<n;i++)
                {
                    if(id[i]==eid)
                    {
                        cout<<"ID: "<<id[i]<<endl;
                        cout<<"Name: "<<name[i]<<endl;
                        cout<<"Salary: "<<salary[i]<<endl;
                        break;
                    }
                }
                if(i==n)
                    cout<<"Employee Not Found"<<endl;
                break;

            case 4:
                cout<<"Enter Employee ID: ";
                cin>>eid;
                for(i=0;i<n;i++)
                {
                    if(id[i]==eid)
                    {
                        cin.ignore();
                        cout<<"Enter New Name: ";
                        getline(cin,name[i]);
                        cout<<"Enter New Salary: ";
                        cin>>salary[i];
                        cout<<"Employee Updated"<<endl;
                        break;
                    }
                }
                if(i==n)
                    cout<<"Employee Not Found"<<endl;
                break;

            case 5:
                cout<<"Enter Employee ID: ";
                cin>>eid;
                for(i=0;i<n;i++)
                {
                    if(id[i]==eid)
                    {
                        for(int j=i;j<n-1;j++)
                        {
                            id[j]=id[j+1];
                            name[j]=name[j+1];
                            salary[j]=salary[j+1];
                        }
                        n--;
                        cout<<"Employee Deleted"<<endl;
                        break;
                    }
                }
                if(i==n)
                    cout<<"Employee Not Found"<<endl;
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