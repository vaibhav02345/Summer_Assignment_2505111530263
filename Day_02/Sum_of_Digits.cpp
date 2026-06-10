#include <iostream>
using namespace std;

int sumdigits(int n) {
    return (n == 0) ? 0 : n % 10 + sumdigits(n / 10);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << sumdigits(n);

    return 0;
}