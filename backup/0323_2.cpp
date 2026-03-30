#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n / 100 == 2) cout << "ok" << "\n";
    else if (n / 100 == 4) cout << "error" << "\n";
    else cout << "unknown" << "\n";
    return 0;
}