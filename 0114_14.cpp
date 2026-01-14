#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int H, W;
    cin >> H >> W;
    vector<string> a(H);
    for (int i = 0; i < H; i++) cin >> a[i];

    // 上の枠
    cout << string(W + 2, '#') << '\n';

    // 中身（左右に # を足す）
    for (int i = 0; i < H; i++) {
        cout << '#' << a[i] << "#\n";
    }

    // 下の枠
    cout << string(W + 2, '#') << '\n';

    return 0;
}
