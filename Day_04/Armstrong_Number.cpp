#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int num = n;
    int r = 0;
    while (n > 0) {
        r++;
        n /= 10;
    }
    n = num;
    int sum = 0;
      while (n > 0) {
        int digit = n % 10;
        sum += pow(digit, r);
        n /= 10;
    }

    if (sum == num)
        cout << "Armstrong Number";
    else
        cout << "Not an Armstrong Number";

    return 0;
}