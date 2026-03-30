#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int n = s.size();

    if (n >= 11) cout << "OK" << "\n";
    else cout << 11 - n << "\n";
    return 0;
}