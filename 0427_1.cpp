#include <bits/stdc++.h>
using namespace std;

int main() {
    int ans = 0;
    for (int i = 0; i < 3; i++) {
        int x;
        cin >> x;
        (x >= 20 ? ans++ : ans += 0);
    }
    cout << (ans == 3 ? "OK" : "NG") << "\n";
    return 0;
}