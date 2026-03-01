#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v;

    for (int i = 0; i < 3; i++) {
        v.push_back(n % 10);
        n /= 10;
    }
    if (v[0] == v[1] && v[1] == v[2]) cout << "Yes" << "\n";
    else cout << "No" << "\n";
    return 0;
}