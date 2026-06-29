#include<iostream>
using namespace std;

int main()
{
    int id[100], quantity[100];
    char name[100][50];
    float price[100];
    int n = 0, choice, searchid, i;
    while(true)
    {
        cout << "1. Add Item" << endl;
        cout << "2. Update Item" << endl;
        cout << "3. Delete Item" << endl;
        cout << "4. Display Items" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch(choice)
        {
            case 1:
                cout << "Enter Item ID: ";
                cin >> id[n];
                cout << "Enter Item Name: ";
                cin >> name[n];
                cout << "Enter Price: ";
                cin >> price[n];
                cout << "Enter Quantity: ";
                cin >> quantity[n];
                n++;
                cout << "Item Added Successfully." << endl;
                break;

            case 2:
                cout << "Enter Item ID to Update: ";
                cin >> searchid;
                for(i = 0; i < n; i++)
                    if(id[i] == searchid)
                    {
                        cout << "Enter New Name: ";
                        cin >> name[i];
                        cout << "Enter New Price: ";
                        cin >> price[i];
                        cout << "Enter New Quantity: ";
                        cin >> quantity[i];
                        cout << "Item Updated Successfully." << endl;
                        break;
                    }
                if(i == n)
                    cout << "Item Not Found." << endl;

                break;

            case 3:
                cout << "Enter Item ID to Delete: ";
                cin >> searchid;
                for(i = 0; i < n; i++)
                    if(id[i] == searchid)
                        break;
                if(i == n)
                    cout << "Item Not Found." << endl;
                else
                {
                    for(int j = i; j < n - 1; j++)
                    {
                        id[j] = id[j + 1];
                        price[j] = price[j + 1];
                        quantity[j] = quantity[j + 1];
                        int k = 0;
                        while(name[j + 1][k] != '\0')
                        {
                            name[j][k] = name[j + 1][k];
                            k++;
                        }
                        name[j][k] = '\0';
                    }
                    n--;
                    cout << "Item Deleted Successfully." << endl;
                }

                break;

            case 4:
                if(n == 0)
                    cout << "No Items Available." << endl;
                else
                {
                    cout << "ID\tName\tPrice\tQuantity" << endl;
                    for(i = 0; i < n; i++)
                        cout << id[i] << "\t" << name[i] << "\t" << price[i] << "\t" << quantity[i] << endl;
                }

                break;

            case 5:
                cout << "Exited Successfully." << endl;
                return 0;

            default:
                cout << "Invalid Choice!" << endl;
        }
        cout << endl;
    }

    return 0;
}