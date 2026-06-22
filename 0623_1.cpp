#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1;
    char s2;
    int n;
    cin >> s1 >> s2 >> n;

    cout << (s1[n-1] == s2 ? "Yes" : "No") << "\n";
    return 0;
}