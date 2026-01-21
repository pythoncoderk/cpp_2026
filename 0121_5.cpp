#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int ans = 1;

    for (int i = 1; i <= n; i++) {
        int calc = 1;
        for (int j = 0; j < 3; j++) {
            calc *= -1;
        }

    }
    cout << ans << endl;
}