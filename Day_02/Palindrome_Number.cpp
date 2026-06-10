#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int original = n;
    int rev = 0;
    while (n > 0){
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    if (original == rev)
        cout << "Palindrome Number";
    else
        cout << "Not a Palindrome Number";
    return 0;
}