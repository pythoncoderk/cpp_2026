#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt = 0;
    int serch = 0;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++) {
        int x = v[serch]-1;
        cnt += 1;
        serch = x;
        if (x == 1) {
            cout << cnt << "\n";
            return 0;
        }
    }
    cout << -1 << "\n";
}