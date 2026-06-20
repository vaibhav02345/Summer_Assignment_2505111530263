#include <iostream>
using namespace std;
int main()
{
    int m1, n1, m2, n2;
    cout << "Enter m for first matrix: ";
    cin >> m1;
    cout << "Enter n for first matrix: ";
    cin >> n1;
    int a[m1][n1];
    cout << "Enter values for first matrix:" << endl;
    for(int i = 0; i < m1; i++)
        for(int j = 0; j < n1; j++)
            cin >> a[i][j];
    cout << "Enter m for second matrix: ";
    cin >> m2;
    cout << "Enter n for second matrix: ";
    cin >> n2;
    int b[m2][n2];
    cout << "Enter values for second matrix:" << endl;
    for(int i = 0; i < m2; i++)
        for(int j = 0; j < n2; j++)
            cin >> b[i][j];
    if(n1 != m2)
    {
        cout << "Matrix multiplication not possible";
        return 0;
    }
    int c[m1][n2];
    for(int i = 0; i < m1; i++)
        for(int j = 0; j < n2; j++)
        {
            c[i][j] = 0;
            for(int k = 0; k < n1; k++)
                c[i][j] += a[i][k] * b[k][j];
        }
    cout << "Resultant matrix:" << endl;
    for(int i = 0; i < m1; i++)
    {
        for(int j = 0; j < n2; j++)
            cout << c[i][j] << " ";
        cout << endl;
    }

    return 0;
}