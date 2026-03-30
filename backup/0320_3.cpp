#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    cout << (s2.find(s1) != string::npos ? "NG" : s2) << "\n";
    return 0;
}