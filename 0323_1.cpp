#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    cout << (m - n >= 0 ? to_string(m - n) : "No") << "\n";
    return 0;
}