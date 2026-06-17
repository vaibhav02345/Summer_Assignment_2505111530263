#include <iostream>
#include <set>
using namespace std;

void IntersectionArray(int arr1[], int n1, int arr2[], int n2)
{
    set<int> firstArray;
    set<int> common;
    for (int i = 0; i < n1; i++)
        firstArray.insert(arr1[i]);
    for (int i = 0; i < n2; i++)
    {
        if (firstArray.find(arr2[i]) != firstArray.end())
            common.insert(arr2[i]);
    }
    cout << "Intersection Array: ";
    for (int num : common)
        cout << num << " ";
}

int main()
{
    int n1, n2;
    cout << "Enter size of first array: ";
    cin >> n1;
    int arr1[n1];
    cout << "Enter elements of first array: ";
    for (int i = 0; i < n1; i++)
        cin >> arr1[i];
    cout << "Enter size of second array: ";
    cin >> n2;
    cout << "Enter elements of second array: ";
    int arr2[n2];
    for (int i = 0; i < n2; i++)
        cin >> arr2[i];

    IntersectionArray(arr1, n1, arr2, n2);

    return 0;
}