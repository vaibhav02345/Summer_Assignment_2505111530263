#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cout << "Enter number of rows: ";
    cin >> m;
    cout << "Enter number of columns: ";
    cin >> n;
    int A[10][10], B[10][10];
    cout << "Enter elements of Matrix A: ";
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            cin >> A[i][j];
    cout << "Enter elements of Matrix B: ";
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            cin >> B[i][j];
    cout << "Final Matrix :";
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
            cout << A[i][j] - B[i][j] << " ";
        cout << endl;
    }

    return 0;
}