#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int len = s.size() / 2;

    for (int i = 0; i < s.size(); i++) {
        if (i != len) cout << s[i];
    }
    cout << endl;
}