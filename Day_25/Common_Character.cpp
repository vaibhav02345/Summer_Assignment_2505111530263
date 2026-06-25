#include <iostream>
#include <set>
using namespace std;
void CommonCharacters(string s1, string s2) {
    set<char> set1, common;
    for (char ch : s1) {
        set1.insert(ch);
    }
    for (char ch : s2) {
        if (set1.count(ch)) {
            common.insert(ch);
        }
    }
    cout << "Common characters: ";
    for (char ch : common) {
        cout << ch << " ";
    }
}

int main() {
    string s1 = "apple";
    string s2 = "plane";
    CommonCharacters(s1, s2);

    return 0;
}