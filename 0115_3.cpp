#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;

    vector<string> str(h);
    for (int i = 0; i < h; i++) {
        cin >> str[i];
    }

    vector<string> v(h+2, string(w+2, '#'));

    for (int i = 1; i < h+1; i++) {
        for (int j = 1; j < w+1; j++) {
            v[i][j] = str[i-1][j-1];
        }
    }
    for (int i = 0; i < h+2; i++) cout << v[i] << endl;

}