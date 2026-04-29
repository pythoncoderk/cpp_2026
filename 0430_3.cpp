#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int off = m * 7 / 10;

    cout << min(n, off) << "\n";
    return 0;
}