#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    char c1 = s.front();
    for (char c2 : s) {
        if (c1 != c2) {
            cout << "OK" << "\n";
            return 0;
        }
    }
    cout << "NG" << "\n";
    return 0;
}