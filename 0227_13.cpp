#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int cnt = 1;
    for (int i = 0; i < n; i++) {
        cnt *= 2;
    }
    cout << cnt << "\n";
    return 0;
}