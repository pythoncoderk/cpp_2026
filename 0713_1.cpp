#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    cout << (n + m == 21 ? "Win" : to_string(n + m)) << "\n";
    return 0;
}