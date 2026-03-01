#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    char last = s[s.size() - 1];
    if (last == 'd') cout << "Yes" << "\n";
    else cout << "No" << "\n";
    return 0;

}