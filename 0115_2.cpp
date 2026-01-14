#include <bits/stdc++.h>
using namespace std;

int main() {
    // 入力
    int H, W;
    cin >> H >> W;
    vector<string> a(H);
    for (int i = 0; i < H; i++) cin >> a[i];

    // 縦 H+2、横 W+2 のグリッドを用意して、'#' で埋めておく
    vector<string> S(H+2, string(W+2, '#'));

    // 真ん中を埋めていく
    for (int i = 1; i < H+1; i++) {
        for (int j = 1; j < W+1; j++) {
            S[i][j] = a[i-1][j-1];
        }
    }

    // 出力する
    for (int i = 0; i < H+2; i++) cout << S[i] << endl;
}