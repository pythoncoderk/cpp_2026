#include <bits/stdc++.h>
using namespace std;

int main() {
    int ans = 0;
    int cnt = 0;
    for (int i = 0; i < 10; i++) {
        int x;
        cin >> x;
        (x <= 2 ? ans++ : cnt++);
    }
    cout << ans << "\n";
    return 0;
}