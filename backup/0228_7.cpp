#include <bits/stdc++.h>
using namespace std;

int main () {
    string s;
    int n;
    cin >> s >> n;
    int cnt = 0;
    for (char c : s)
        if (c == 'R') cnt++;

    if (cnt >= n) cout << "Yes" << "\n";
    else cout << "No" << "\n";
    return 0;
}