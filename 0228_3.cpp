#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b, c;
    cin >> n >> a >> b >> c;

    cout << ((n >= a) ? n * b : n * c) << "\n";
    return 0;
}