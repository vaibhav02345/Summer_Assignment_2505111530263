#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "Enter m: ";
    cin >> m;
    cout << "Enter n: ";
    cin >> n;
    int a[m][n];
    cout << "Enter values:" << endl;
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            cin >> a[i][j];
    cout << "Row wise sum:" << endl;
    for(int i = 0; i < m; i++)
    {
        int sum = 0;
        for(int j = 0; j < n; j++)
            sum += a[i][j];
        cout << "Sum of row " << i + 1 << " = " << sum << endl;
    }

    return 0;
}