#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    vector<int> v2;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    for (int i = 0; i < n-1; i++) {
        if (v[i] == 2 && v[i + 1] == 0) v2.push_back(i + 1);

    }
    if (v2.size() == 0)
    {
        cout << -1 << "\n";
        return 0;
    }


    for (int i = 0; i < v2.size(); i++) {
        cout << v2[i] << (i + 1 == v2.size() ? "\n" : " ");
    }
    return 0;
}