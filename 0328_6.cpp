#include <bits/stdc++.h>
using namespace std;

int main() {
    int cnt = 0;
    for (int i = 0; i < 10; i++) {
        char s;
        cin >> s;
        if (s == 'W') cnt++;
    }
    if (cnt >= 5) cout << "OK" << "\n";
    else cout << "NG" << "\n";
    return 0;
}