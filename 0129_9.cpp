#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int drive = max(n - 3, 0);

    cout << 500 + drive * m << "\n";
}