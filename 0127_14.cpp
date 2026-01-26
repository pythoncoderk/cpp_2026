#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    sort(v.rbegin(), v.rend());

    int a = 0;
    int b = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) a += v[i];
        else b += v[i];
    }
    cout << a - b << "\n";
    return 0;
}