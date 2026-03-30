#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, a, b, c, d;
    cin >> n >> a >> b >> c >> d;

    cout << min({a, b, c, d}) * n << "\n";
    return 0;
}