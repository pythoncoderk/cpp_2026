#include <bits/stdc++.h>
using namespace std;

int main() {
    int cnt = 0;
    for (int i = 0; i < 10; i++) {
        char c;
        cin >> c;
        if (c == 'W') cnt++;

    }
    cout << (cnt >= 5 ? "OK" : "NG") << "\n";
    return 0;
}