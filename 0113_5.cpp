#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, k;
    cin >> x >> k;

    if (x & (1 << k)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}