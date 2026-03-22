#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, m;
    cin >> t >> m;
    if (t >= 25 && m <= 40) cout << "No" << "\n";
    else if (t >= 25 || m <= 40) cout << "Yes" << "\n";
    else cout << "No" << "\n";
    return 0;
}