#include<iostream>
#include<string>
using namespace std;

int id[100],marks[100],n=0;
string name[100];

void addStudent()
{
    cout<<"Enter Student ID: ";
    cin>>id[n];
    cin.ignore();
    cout<<"Enter Student Name: ";
    getline(cin,name[n]);
    cout<<"Enter Marks: ";
    cin>>marks[n];
    n++;
    cout<<"Student Added"<<endl;
}

void displayStudents()
{
    if(n==0)
    {
        cout<<"No Records Found"<<endl;
        return;
    }
    cout<<"ID\tName\tMarks"<<endl;
    for(int i=0;i<n;i++)
        cout<<id[i]<<"\t"<<name[i]<<"\t"<<marks[i]<<endl;
}

void searchStudent()
{
    int sid;
    cout<<"Enter Student ID: ";
    cin>>sid;
    for(int i=0;i<n;i++)
    {
        if(id[i]==sid)
        {
            cout<<"ID: "<<id[i]<<endl;
            cout<<"Name: "<<name[i]<<endl;
            cout<<"Marks: "<<marks[i]<<endl;
            return;
        }
    }
    cout<<"Student Not Found"<<endl;
}

void updateStudent()
{
    int sid;
    cout<<"Enter Student ID: ";
    cin>>sid;
    for(int i=0;i<n;i++)
    {
        if(id[i]==sid)
        {
            cin.ignore();
            cout<<"Enter New Name: ";
            getline(cin,name[i]);
            cout<<"Enter New Marks: ";
            cin>>marks[i];
            cout<<"Record Updated"<<endl;
            return;
        }
    }
    cout<<"Student Not Found"<<endl;
}

void deleteStudent()
{
    int sid;
    cout<<"Enter Student ID: ";
    cin>>sid;
    for(int i=0;i<n;i++)
    {
        if(id[i]==sid)
        {
            for(int j=i;j<n-1;j++)
            {
                id[j]=id[j+1];
                name[j]=name[j+1];
                marks[j]=marks[j+1];
            }
            n--;
            cout<<"Record Deleted"<<endl;
            return;
        }
    }
    cout<<"Student Not Found"<<endl;
}

void highestMarks()
{
    if(n==0)
    {
        cout<<"No Records Found"<<endl;
        return;
    }

    int pos=0;
    for(int i=1;i<n;i++)
        if(marks[i]>marks[pos])
            pos=i;
    cout<<"Top Student"<<endl;
    cout<<"ID: "<<id[pos]<<endl;
    cout<<"Name: "<<name[pos]<<endl;
    cout<<"Marks: "<<marks[pos]<<endl;
}

void averageMarks()
{
    if(n==0)
    {
        cout<<"No Records Found"<<endl;
        return;
    }
    int sum=0;
    for(int i=0;i<n;i++)
        sum+=marks[i];
    cout<<"Average Marks: "<<(float)sum/n<<endl;
}

int main()
{
    int ch;
    while(true)
    {
        cout<<"1. Add Student"<<endl;
        cout<<"2. Display Students"<<endl;
        cout<<"3. Search Student"<<endl;
        cout<<"4. Update Student"<<endl;
        cout<<"5. Delete Student"<<endl;
        cout<<"6. Highest Marks"<<endl;
        cout<<"7. Average Marks"<<endl;
        cout<<"8. Exit"<<endl;
        cout<<"Enter Choice: ";
        cin>>ch;
        switch(ch)
        {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                updateStudent();
                break;

            case 5:
                deleteStudent();
                break;

            case 6:
                highestMarks();
                break;

            case 7:
                averageMarks();
                break;

            case 8:
                cout<<"Exited Successfully";
                return 0;

            default:
                cout<<"Invalid Choice"<<endl;
        }

        cout<<endl;
    }
}