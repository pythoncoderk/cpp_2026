#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt = 1;
    while (n > 1) {
        n /= 10;
        cnt++;
    }
    if (cnt >= 11) cout << "OK" << "\n";
    else cout << 11 - cnt << "\n";
    return 0;
}