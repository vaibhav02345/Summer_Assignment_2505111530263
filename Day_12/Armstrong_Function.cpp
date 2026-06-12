#include <iostream>
#include <cmath>
using namespace std;

bool Armstrong(int n)
{
    int original = n;
    int d = 0;
    int sum = 0;
    int temp = n;

    while (temp > 0)
    {
        d++;
        temp /= 10;
    }

    temp = n;

    while (temp > 0)
    {
        int r = temp % 10;
        sum += pow(r, d);
        temp /= 10;
    }

    return sum == original;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (Armstrong(n))
        cout << "Armstrong Number";
    else
        cout << "Not an Armstrong Number";
    
    return 0;
}