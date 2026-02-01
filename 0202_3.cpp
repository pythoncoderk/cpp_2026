#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b, c;
    cin >> n >> a >> b >> c;

    if (a + b + c <= n) cout << "OK" << "\n";
    else cout << "NG" << "\n";

    return 0;
}