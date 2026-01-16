#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    vector<int> v = {A, B, C};
    sort(v.begin(), v.end(), greater<int>());

    int ans = 0;
    for (int x : v) {
        ans = ans * 10 + x;
    }

    cout << ans << '\n';
    return 0;
}