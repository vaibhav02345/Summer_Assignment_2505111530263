#include<iostream>
using namespace std;

int main()
{
    int arr[100], n, choice, i, key, max, min, sum = 0;
    float avg;
    while(true)
    {
        cout << "1. Input Array" << endl;
        cout << "2. Display Array" << endl;
        cout << "3. Search Element" << endl;
        cout << "4. Find Maximum" << endl;
        cout << "5. Find Minimum" << endl;
        cout << "6. Sum of Elements" << endl;
        cout << "7. Average" << endl;
        cout << "8. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch(choice)
        {
            case 1:
                cout << "Enter size of array: ";
                cin >> n;
                cout << "Enter array elements: ";
                for(i = 0; i < n; i++)
                    cin >> arr[i];

                break;

            case 2:
                cout << "Array Elements: ";
                for(i = 0; i < n; i++)
                    cout << arr[i] << " ";

                cout << endl;
                break;

            case 3:
                cout << "Enter element to search: ";
                cin >> key;
                for(i = 0; i < n; i++)
                    if(arr[i] == key)
                    {
                        cout << "Element Found at Position " << i + 1 << endl;
                        break;
                    }

                if(i == n)
                    cout << "Element Not Found" << endl;

                break;

            case 4:
                max = arr[0];
                for(i = 1; i < n; i++)
                    if(arr[i] > max)
                        max = arr[i];

                cout << "Maximum Element = " << max << endl;
                break;

            case 5:
                min = arr[0];
                for(i = 1; i < n; i++)
                    if(arr[i] < min)
                        min = arr[i];

                cout << "Minimum Element = " << min << endl;
                break;

            case 6:
                sum = 0;
                for(i = 0; i < n; i++)
                    sum = sum + arr[i];

                cout << "Sum = " << sum << endl;
                break;

            case 7:
                sum = 0;
                for(i = 0; i < n; i++)
                    sum = sum + arr[i];

                avg = (float)sum / n;
                cout << "Average = " << avg << endl;
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