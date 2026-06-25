#include <iostream>
#include <algorithm>
using namespace std;
bool compareLength(string a, string b) {
    return a.length() < b.length();
}

int main() {
    string words[] = {"apple", "kiwi", "banana", "cat", "grapes"};
    int n = 5;
    sort(words, words + n, compareLength);
    cout << "Words sorted by length:\n";
    for (int i = 0; i < n; i++)
        cout << words[i] << endl;

    return 0;
}