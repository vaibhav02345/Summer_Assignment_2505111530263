#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int ans = 0;

    for (int i = 1; i <= 10; i++) {
        ans += n;
        cout << n << " x " << i << " = " << ans << '\n';
    }

    return 0;
}