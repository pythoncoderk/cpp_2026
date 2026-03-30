#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    cout << ((n * m) <= 9999 ? to_string(n * m) : "NG") << "\n";
    return 0;
}