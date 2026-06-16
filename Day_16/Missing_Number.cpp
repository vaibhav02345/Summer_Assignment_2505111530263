#include <iostream>
#include <vector>
using namespace std;
int Missing(vector<int>& arr) {
    int n = arr.size() + 1;
    int x = 0;
    for (int i = 1; i <= n; i++)
        x ^= i;

    for (int num : arr)
        x ^= num;

    return x;
}

int main() {
    vector<int> arr = {1, 2, 3, 5};
    cout << "Missing number: " << Missing(arr) << endl;

    return 0;
}