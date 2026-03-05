#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        cout << s[i];
        cout << (i % 9 == 0 && i != 0 ? "\n" : "");

    }
    return 0;
}