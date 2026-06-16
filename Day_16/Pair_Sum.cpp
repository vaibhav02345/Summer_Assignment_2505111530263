#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

bool Pair(vector<int>& arr, int sum) {
    unordered_set<int> s;
    for (int value : arr) {
        int required = sum - value;
        if (s.find(required) != s.end()) {
            cout << required << " " << value << endl;
            return true;
        }
        s.insert(value);
    }

    return false;
}

int main() {
    vector<int> arr = {2, 7, 11, 15};

    if (!Pair(arr, 9))
        cout << "No pair found";

    return 0;
}