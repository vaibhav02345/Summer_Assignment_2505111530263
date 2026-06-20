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
    if(m != n)
    {
        cout << "Matrix is not symmetric";
        return 0;
    }
    int flag = 1;
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            if(a[i][j] != a[j][i])
                flag = 0;
    if(flag == 1)
        cout << "Matrix is symmetric";
    else
        cout << "Matrix is not symmetric";

    return 0;
}