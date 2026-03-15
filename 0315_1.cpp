#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int ans = n;

    int cnt = n % 10;
    n /= 10;
    for (int i = 0; i < 3; i++) {
        if (cnt != (n % 10)) {
            cout << "No" << "\n";
            return 0;
        }
        n /= 10;
    }
    cout << ans << "\n";
    return 0;
}