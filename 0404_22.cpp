#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char c;
    cin >> c;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == c) {
            cout << i + 1 << "\n";
            break;
        }
    }

    return 0;
}