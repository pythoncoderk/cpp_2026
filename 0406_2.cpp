#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a.push_back(x);
    }

    for (int i = 1; i < n; i++) {
        if (a[i-1] == 2 && a[i] == 0) v.push_back(i);
    }
    if (v.size() == 0) {
        cout << -1 << "\n";
        return 0;
    }
    for (int i = 0; i < v.size(); i++) {
        if (i != v.size() - 1) {
            cout << v[i] << " ";
        } else {
            cout << v[i] << "\n";
        }
    }
    return 0;
}