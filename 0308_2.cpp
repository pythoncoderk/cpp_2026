#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    s[0] = (s[0] == 'A' ? 'R' : s[0]);
    cout << s << "\n";
    return 0;
}