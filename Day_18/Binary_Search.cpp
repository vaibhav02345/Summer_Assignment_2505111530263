#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    int target;
    cout << "Enter the target element: ";
    cin >> target;
    int low = 0;
    int high = n - 1;
    int pos = -1;
    while(low <= high)
    {
        int mid = (low + high) / 2;

        if(arr[mid] == target)
        {
            pos = mid;
            break;
        }

        if(arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    if(pos == -1)
        cout << "Element not found";
    else
    {
        cout << "Position of the target element: ";
        cout << pos;
    }

    return 0;
}