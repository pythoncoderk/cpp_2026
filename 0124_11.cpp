#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;

        x -= 1;
        y -= 1;

        v[x] += 1;
        v[y] += 1;
    }
    for (int i = 0; i < n; i++) {
        cout << v[i] << "\n";
    }
}