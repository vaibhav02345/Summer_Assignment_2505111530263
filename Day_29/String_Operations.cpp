#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char str1[100], str2[100];
    int choice;
    while(true)
    {
        cout << "1. Input String" << endl;
        cout << "2. Display String" << endl;
        cout << "3. Find Length" << endl;
        cout << "4. Copy String" << endl;
        cout << "5. Concatenate Strings" << endl;
        cout << "6. Compare Strings" << endl;
        cout << "7. Reverse String" << endl;
        cout << "8. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch(choice)
        {
            case 1:
                cout << "Enter String: ";
                cin >> str1;
                break;

            case 2:
                cout << "String = " << str1 << endl;
                break;

            case 3:
                cout << "Length = " << strlen(str1) << endl;
                break;

            case 4:
                strcpy(str2, str1);
                cout << "Copied String = " << str2 << endl;
                break;

            case 5:
                cout << "Enter Another String: ";
                cin >> str2;
                strcat(str1, str2);
                cout << "Concatenated String = " << str1 << endl;
                break;

            case 6:
                cout << "Enter Another String: ";
                cin >> str2;
                if(strcmp(str1, str2) == 0)
                    cout << "Strings are Equal" << endl;
                else
                    cout << "Strings are Not Equal" << endl;

                break;

            case 7:
                strrev(str1);
                cout << "Reversed String = " << str1 << endl;
                break;

            case 8:
                cout << "Exited Successfully" << endl;
                return 0;

            default:
                cout << "Invalid Choice!" << endl;
        }
        cout << endl;
    }

    return 0;
}