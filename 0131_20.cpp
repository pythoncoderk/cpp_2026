#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int len = s.size()-10;

    cout << max(0, len) << "\n";
    return 0;
}