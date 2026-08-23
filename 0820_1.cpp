#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i <= n; i++) {
        if (n == pow(2, i)) {
            cout << "OK" << "\n";
            return 0;
        }
    }
    cout << "NG" << "\n";
    return 0;
}