#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    string names[] = {"Vaibhav", "Ankit", "Rohit", "Aman", "Sarthak"};
    int n = 5;
    sort(names, names + n);
    cout << "Names in alphabetical order:\n";
    for (int i = 0; i < n; i++)
        cout << names[i] << endl;

    return 0;
}