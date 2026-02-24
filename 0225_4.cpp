#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    set<int> s;
    for (int i = 0; i < 4; i++) {
        // cout << n % 10 << "\n";
        s.insert(n % 10);
        n /= 10;
    }
    if (s.size() <= 3) cout << "NG" << "\n";
    else cout << "OK" << "\n";
    return 0;
}