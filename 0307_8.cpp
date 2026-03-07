#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string ans = "";
    for (int i = 0; i < n; i++) {
        string c;
        cin >> c;
        ans += c[0];
    }
    cout << ans << "\n";
    return 0;
}