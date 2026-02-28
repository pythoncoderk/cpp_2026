#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt = 0;

    for (int i = 0; i < 7; i++) {
        int y;
        cin >> y;

        cnt += y;

    }
    if (n >= cnt) cout << cnt << "\n";
    else cout << n << "\n";
    return 0;
}