#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int cnt = 10 - (int)s.size();

    cout << max(cnt, 0) << "\n";
    return 0;
}