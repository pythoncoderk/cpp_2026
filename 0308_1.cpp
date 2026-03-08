#include <bits/stdc++.h>
using namespace std;

int main () {
    string s;
    cin >> s;

    cout << (s[0] == 'A'? "R" + s.substr(1) : s) << "\n";
    return 0;
}