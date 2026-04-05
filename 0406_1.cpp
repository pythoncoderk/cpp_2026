#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x == 2) a.push_back(i+1);
    }
    if (a.size() == 0) {
        cout << -1 << "\n";
        return 0;
    }

    for (int i = 0; i < a.size(); i++) {
        if (i != a.size() - 1) cout << a[i] << " ";
        else cout << a[i] << "\n";
    }
    return 0;
}