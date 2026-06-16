#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int Frequency(vector<int>& arr) {
    unordered_map<int, int> freq;
    int max = 0;
    int ans = arr[0];
    for (int num : arr) {
        freq[num]++;

        if (freq[num] > max) {
            max = freq[num];
            ans = num;
        }
    }

    return ans;
}

int main() {
    vector<int> arr = {1, 2, 3, 2, 4, 2, 1, 1, 1};
    cout << Frequency(arr);

    return 0;
}