#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int l = s.size();
    l = ((l + 2 -1) / 2) - 1;

    for (int i = 0; i < s.size(); i++) {
        if (i != l) cout << s[i];
    }
    cout << endl;
}