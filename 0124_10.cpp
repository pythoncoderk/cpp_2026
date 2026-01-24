#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    vector<string> v(h);
    for (int i = 0; i < h; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < w + 2; i++) cout << "#";
    cout << "\n";
    for (int i = 0; i < h; i++) {
        cout << "#" << v[i] << "#" << "\n";
    }
    for (int i = 0; i < w + 2; i++) cout << "#";
    cout << "\n";
}