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
    cout << "Column wise sum:" << endl;
    for(int j = 0; j < n; j++)
    {
        int sum = 0;
        for(int i = 0; i < m; i++)
            sum += a[i][j];
        cout << "Sum of column " << j + 1 << " = " << sum << endl;
    }

    return 0;
}