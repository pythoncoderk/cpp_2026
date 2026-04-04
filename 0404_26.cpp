#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    if (s == "km") cout << n * 1000 * 100 * 10 << "\n";
    else if (s == "m") cout << n * 100 * 10 << "\n";
    else cout << n * 10 << "\n";
    return 0;
}