#include <iostream>
using namespace std;

int main()
{
    int arr[100], n;
    int c = 0;
    cout << "Enter size of array: ";
    cin >> n;
    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    for(int i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
            c++;
    }

    cout << "Even elements = " << c << endl;
    cout << "Odd elements = " << n - c;

    return 0;
}