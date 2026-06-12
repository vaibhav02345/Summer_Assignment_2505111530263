#include <iostream>
using namespace std;

bool Palindrome(int n)
{
    int original = n;
    int r = 0;

    while (n > 0)
    {
        int digit = n % 10;
        r = r * 10 + digit;
        n /= 10;
    }

    return original == r;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (Palindrome(n))
        cout << "Palindrome Number";
    else
        cout << "Not a Palindrome Number";
    return 0;
}