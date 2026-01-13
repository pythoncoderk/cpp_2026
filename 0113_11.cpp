#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int ans = (n - m) % 7;

    if (ans == 0) cout << 7 << endl;
    else cout << 7 - ans << endl;

}