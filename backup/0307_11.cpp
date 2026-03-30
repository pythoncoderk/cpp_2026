#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;

    int ans = n;

    int total = 0;
    while (n--) {
        int x;
        cin >> x;
        total += x;
    }
    cout << total / ans << "\n";
    return 0;
}