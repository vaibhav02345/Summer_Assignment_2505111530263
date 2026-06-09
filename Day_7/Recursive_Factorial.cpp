#include <iostream>
using namespace std;
int f(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * f(n - 1);
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Factorial = " << f(n);
    return 0;
}