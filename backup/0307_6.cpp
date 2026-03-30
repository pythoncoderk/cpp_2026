#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<char> v = {'C', 'A', 'B'};
    string s;
    cin >> s;

    for (char c : s) {
        int n = c - '0';
        cout << v[n];
    }
    cout << "\n";
    return 0;
}