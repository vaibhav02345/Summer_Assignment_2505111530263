#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter order of square matrix: ";
    cin >> n;
    int A[10][10];
    int sum = 0;
    cout << "Enter elements of Matrix: ";
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> A[i][j];
            if(i == j)
                sum += A[i][j];
        }
    }
    cout << "Sum of diagonal elements = " << sum;

    return 0;
}