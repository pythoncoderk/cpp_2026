#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int total = 0;
    total += (n >= 5 ? 5 : n);
    total += (m >= 5 ? 5 : m);
    cout << total << "\n";
    return 0;
}