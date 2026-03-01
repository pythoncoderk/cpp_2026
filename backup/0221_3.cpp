#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1;
    char c;
    int n;
    cin >> s1 >> c >> n;

    if (s1[n-1] == c) cout << "Yes" << "\n";
    else cout << "No" << "\n";
    return 0;
}