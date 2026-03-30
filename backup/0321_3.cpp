#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v(4);
    for (int i = 0; i < 4; i++) {
        int x;
        cin >> x;
        v[i] = x;
    }
    vector<int> v2 = {1, 2, 3, 4, 5};

    for (int y : v2) {
        if (find(v.begin(), v.end(), y) == v.end()) {
            cout << y << "\n";
        }
    }
}