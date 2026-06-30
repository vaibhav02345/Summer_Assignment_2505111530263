#include<iostream>
#include<string>
using namespace std;

int main()
{
    string book[100];
    int id[100];
    bool issued[100];
    int n=0,ch,bid,i;
    while(true)
    {
        cout<<"1. Add Book"<<endl;
        cout<<"2. Display Books"<<endl;
        cout<<"3. Issue Book"<<endl;
        cout<<"4. Return Book"<<endl;
        cout<<"5. Delete Book"<<endl;
        cout<<"6. Exit"<<endl;
        cout<<"Enter Choice: ";
        cin>>ch;
        switch(ch)
        {
            case 1:
                cout<<"Enter Book ID: ";
                cin>>id[n];
                cin.ignore();
                cout<<"Enter Book Name: ";
                getline(cin,book[n]);
                issued[n]=false;
                n++;
                cout<<"Book Added"<<endl;
                break;

            case 2:
                if(n==0)
                    cout<<"No Books Available"<<endl;
                else
                {
                    cout<<"ID\tBook Name\tStatus"<<endl;
                    for(i=0;i<n;i++)
                    {
                        cout<<id[i]<<"\t"<<book[i]<<"\t";
                        if(issued[i])
                            cout<<"Issued";
                        else
                            cout<<"Available";
                        cout<<endl;
                    }
                }
                break;

            case 3:
                cout<<"Enter Book ID: ";
                cin>>bid;
                for(i=0;i<n;i++)
                {
                    if(id[i]==bid)
                    {
                        if(issued[i])
                            cout<<"Book Already Issued"<<endl;
                        else
                        {
                            issued[i]=true;
                            cout<<"Book Issued"<<endl;
                        }
                        break;
                    }
                }
                if(i==n)
                    cout<<"Book Not Found"<<endl;
                break;

            case 4:
                cout<<"Enter Book ID: ";
                cin>>bid;
                for(i=0;i<n;i++)
                {
                    if(id[i]==bid)
                    {
                        if(!issued[i])
                            cout<<"Book Already Available"<<endl;
                        else
                        {
                            issued[i]=false;
                            cout<<"Book Returned"<<endl;
                        }
                        break;
                    }
                }
                if(i==n)
                    cout<<"Book Not Found"<<endl;
                break;

            case 5:
                cout<<"Enter Book ID: ";
                cin>>bid;
                for(i=0;i<n;i++)
                {
                    if(id[i]==bid)
                    {
                        for(int j=i;j<n-1;j++)
                        {
                            id[j]=id[j+1];
                            book[j]=book[j+1];
                            issued[j]=issued[j+1];
                        }
                        n--;
                        cout<<"Book Deleted"<<endl;
                        break;
                    }
                }
                if(i==n)
                    cout<<"Book Not Found"<<endl;
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