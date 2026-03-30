#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int g, p;
    g = 0;
    p = 0;

    for (int i = 0; i < n; i++) {
        char c;
        cin >> c;
        (c == 'G') ? g++ : p++;
    }
    if (g == p) cout << "Draw" << "\n";
    else if (g > p) cout << "P" << "\n";
    else cout << "G" << "\n";
    return 0;
}