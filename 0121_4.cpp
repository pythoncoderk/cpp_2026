#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int ans = 1;

    for (int i = 0; i < m; i++) {
        ans *= n;
    }
    cout << ans << endl;

}