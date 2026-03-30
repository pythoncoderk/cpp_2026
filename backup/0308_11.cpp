#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, m;
    cin >> n >> m;

    int tax = (m * n) / 100;
    cout << tax + m << "\n";
    return 0;
}