#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1;
    cin >> s1;
    set<char> s;

    for (auto c : s1) {
        s.insert(c);
    }
    if (s.size() == 4) {
        cout << "OK" << "\n";
        return 0;
    } else {
        cout << "NG" << "\n";
        return 0;
    }

}