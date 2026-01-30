#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    vector<int> v = {a, b, c};
    bool flag = true;
    for (int i = 0; i < 3; i++) {
        if (v[i] < 20) flag = false;
    }
    if (flag) cout << "OK" << "\n";
    else cout << "NG" << "\n";
    return 0;
}