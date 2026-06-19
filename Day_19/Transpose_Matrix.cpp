#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cout << "Enter number of rows: ";
    cin >> m;
    cout << "Enter number of columns: ";
    cin >> n;
    int A[10][10];
    cout << "Enter elements of Matrix: ";
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            cin >> A[i][j];
    cout << "Transpose Matrix: ";
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
            cout << A[j][i] << " ";
        cout << endl;
    }

    return 0;
}