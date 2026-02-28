#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int n;
    cin >> s >> n;
    int cnt = 0;
    for (int i = 0; i < s.size(); i++) {
        char c = s[i];
        if (c == 'R') cnt++;
    }
    cout << (cnt >= n ? "Yes" : "No") << "\n";
    return 0;
}