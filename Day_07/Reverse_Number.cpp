#include <iostream>
using namespace std;

int r = 0;
int reverse(int n)
{
    if (n == 0)
        return r;
    r = r * 10 + (n % 10);
    return reverse(n / 10);
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Reverse = " << reverse(n);
    return 0;
}