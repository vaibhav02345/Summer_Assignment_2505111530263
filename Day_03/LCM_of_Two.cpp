#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    int x = a;
    int y = b;

    while (y != 0) {
        int r = x % y;
        x = y;
        y = r;
    }

    int gcd = x;
    int lcm = (a * b) / gcd;

    cout << "LCM = " << lcm;

    return 0;
}