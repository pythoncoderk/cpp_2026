#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    cout << (n + m >= 1000 ? n + m - 100 : n + m) << "\n";
    return 0;
}