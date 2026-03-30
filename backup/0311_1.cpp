#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    set<char> v;

    for (char c : s1) {
        v.insert(c);
    }
    for (char c : s2) {
        v.insert(c);
    }
    cout << (v.size() == 1 ? "Yes" : "No") << "\n";
    return 0;
}