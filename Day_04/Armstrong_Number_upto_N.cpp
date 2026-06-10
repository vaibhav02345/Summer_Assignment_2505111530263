#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int start, end;

    cout << "Enter starting number: ";
    cin >> start;

    cout << "Enter ending number: ";
    cin >> end;

    for (int i = start; i <= end; i++) {
        int n = i;
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

        if (sum == num) {
            cout << num << " ";
        }
    }

    return 0;
}