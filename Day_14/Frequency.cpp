#include <iostream>
using namespace std;

int main() {
    int n, element, c = 0;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Enter element to find frequency: ";
    cin >> element;
    for(int i = 0; i < n; i++) {
        if(arr[i] == element)
            c++;
    }
    cout << "Frequency of " << element << " = " << c;

    return 0;
}