#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<long long> v;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < 2; j++) {
            int cnt;
            cin >> cnt;
            v.push_back(cnt);
        }
    }
    for (int i = 0; i < n; i++) {
        int ans = 0;
        for (int j = 0; j < v.size(); j++) {
            if (v[j] == i + 1) ans++;
        }
        cout << ans << endl;
    }
}