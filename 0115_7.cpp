#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; i++) cin >> a[i], a[i]--;

    int res = 0, cur = 0;
    vector<int> seen(N, false);  // 重複判定用
    while (cur != 1) {
        seen[cur] = true;
        cur = a[cur];  // 次の頂点へ遷移させる
        res++;  // カウンタを回す

        if (seen[cur]) {
            // すでに訪れた頂点に到達してしまったら、ループしてしまう
            // ゆえに、頂点 1 へは辿り着けない
            cout << -1 << endl;
            return 0;
        }
    }
    cout << res << endl;
}
