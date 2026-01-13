#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;

    vector<vector<char>> grid(h, vector<char>(w));

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> grid[i][j];
        }
    }

    for (int i = 0; i < h; i++) {
        int cnt = 0;
        for (int j = 0; j < w; j++) {
            if (grid[i-1][j] == '#') cnt++;
        }
        cout << cnt;
    }



}