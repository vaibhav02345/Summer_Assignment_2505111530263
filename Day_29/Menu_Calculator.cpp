#include<iostream>
using namespace std;

int main()
{
    int choice;
    float a, b;
    while(true)
    {
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Result = " << a + b << endl;
                break;

            case 2:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Result = " << a - b << endl;
                break;

            case 3:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Result = " << a * b << endl;
                break;

            case 4:
                cout << "Enter two numbers: ";
                cin >> a >> b;

                if(b == 0)
                    cout << "Division by zero is not possible." << endl;
                else
                    cout << "Result = " << a / b << endl;

                break;

            case 5:
                cout << "Exited Successfully";
                return 0;

            default:
                cout << "Invalid Choice!" << endl;
        }
        cout << endl;
    }

    return 0;
}