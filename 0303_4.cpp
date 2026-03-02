#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int cnt = 1;
    int total = 0;
    reverse(s.begin(), s.end());

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '1') total += cnt;
        cnt *= 2;
    }
    cout << total << "\n";
    return 0;

}