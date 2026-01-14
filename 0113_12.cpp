#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    char l[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> l[i][j];
        }
    }

    vector<int> h = {-1, -1, -1, 0, 0, 1, 1, 1};
    vector<int> w = {-1, 0, 1, -1, 1, -1, 0, 1};

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int cnt = 0;
            if (l[i][j] == '#') {
                cout << '#';

            } else {
                for (int k = 0; k < h.size(); k++) {
                    if (i+h[k] >= 0 && i+h[k] < n && j+w[k] >= 0 && j+w[k] < m) {
                        if (l[i+h[k]][j+w[k]] == '#') cnt++;
                    }

                }
                cout << cnt;
            }

        }
        cout << endl;
    }

}