#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<string> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < m + 2; i++) cout << "#";
    cout << "\n";
    for (int i = 0; i < n; i++) cout << "#" << v[i] << "#" << "\n";
    for (int i = 0; i < m + 2; i++) cout << "#";
    cout << "\n";
}