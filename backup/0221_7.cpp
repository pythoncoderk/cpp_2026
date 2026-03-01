#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n < 1000) cout << 0 << "\n";
    else cout << n / 10 << "\n";
    return 0;
}