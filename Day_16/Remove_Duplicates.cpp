#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<int> Duplicates(vector<int>& arr) {
    unordered_set<int> seen;
    vector<int> result;
    for (int num : arr) {
        if (seen.find(num) == seen.end()) {
            seen.insert(num);
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    vector<int> arr = {1, 2, 2, 3, 4, 4, 5};
    vector<int> result = Duplicates(arr);
    for (int num : result)
        cout << num << " ";

    return 0;
}