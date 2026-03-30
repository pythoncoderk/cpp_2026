#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int total = 1;
    for (char c : s) {
        total = (total << 1) + (c - '0');
    }
    cout << total << "\n";
    return 0;
}