#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int x = count(s.begin(), s.end(), '_');
    int y = count(s.begin(), s.end(), '-');

    if (x >= y) {
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '-') s[i] = '_';
        }
    } else {
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '_') s[i] = '-';
        }
    }
    cout << s << "\n";
    return 0;
}