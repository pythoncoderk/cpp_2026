#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 7;
    int total = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x == 1) total++;
    }
    if (total >= 5) cout << "yes" << "\n";
    else cout << "no" << "\n";
    return 0;
}