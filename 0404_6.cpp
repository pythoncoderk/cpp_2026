#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt = 1;
    while (n >= 10) {
        n /= 10;
        cnt++;
    }
    cout << cnt << "\n";
    return 0;
}