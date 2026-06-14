#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++) 
        cin >> arr[i];
    int l = arr[0];
    int sl = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > l) {
            sl = l;
            l = arr[i];
        }
        else if(arr[i] > sl && arr[i] != l)
            sl = arr[i];
    }
    cout << "Second largest element = " << sl;

    return 0;
}