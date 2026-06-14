#include <iostream>
using namespace std;

int main() {
    int n, element, p = -1;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++) 
        cin >> arr[i];
    cout << "Enter element to search: ";
    cin >> element;
    for(int i = 0; i < n; i++) {
        if(arr[i] == element) {
            p = i;
            break;
        }
    }

    if(p != -1)
        cout << "Element found at index " << p;
    else
        cout << "Element not found";

    return 0;
}